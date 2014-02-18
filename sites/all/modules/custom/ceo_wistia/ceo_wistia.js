/**
 * @file
 * Integrates Wistia oembed fields with the Wistia player API.
 *
 * @copyright (c) Copyright 2014 Spyder Byte Design LLC
 */

(function ($) {
  Drupal.behaviors.ceo_custom = {
    // Drupal behavior placeholder.
  };
  // Drupal.settings.ceo_wistia.uid
//  $('#dialog').hide();

  // Resume video progress where user last left off.
//  wistiaEmbed.time(900 * Drupal.settings.ceo_wistia.progress);

  // Stops video every 900 seconds for user check.
  wistiaEmbed.bind("secondchange", function (s) {
    if(s % 15 == 0 && s != 0) {
      wistiaEmbed.pause();
      $('#dialog').show();
      modal();
      $.ajax({
        url: '/ceo_wistia/progress/' + Drupal.settings.ceo_wistia.nid  + '/' + Drupal.settings.ceo_wistia.uid + '/' + Drupal.settings.ceo_wistia.progress
      });
    }
  });


  // When video ends send user to grantCredit callback.
  wistiaEmbed.bind("end", function () {
    window.location.href == "http://newUrl.com";
    $.ajax({
      url: '/ceo_certification_accreditation/credit/' + Drupal.settings.ceo_wistia.uid  + '/' + Drupal.settings.ceo_wistia.nid,
      success: function(data) {
        $("#dialog").html("Congratulations! You've received a credit towards course completion.");
        $( "#dialog" ).dialog({
          modal: true,
          resizable: false,
          height: 240,
          width: 400,
          buttons: {
            Ok: function() {
              window.location.href='/ceo_certification_accreditation/completion/' + Drupal.settings.ceo_wistia.uid  + '/' + Drupal.settings.ceo_wistia.nid;
            }
          }
        });
      }

    });
  });



  function modal() {
    $( "#dialog" ).dialog({
      modal: true,
      resizable: false,
      height: 240,
      width: 400,
      buttons: {
        Ok: function() {
          $( this ).dialog( "close" );
          Drupal.settings.ceo_wistia.progress ++;
          wistiaEmbed.play();
        }
      }
    });
  }


}(jQuery));