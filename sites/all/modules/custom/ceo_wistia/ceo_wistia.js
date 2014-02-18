(function ($) {
  Drupal.behaviors.ceo_custom = {
//    attach: function (context, settings) {
//      $(document).ready(function(){
//        alert('jquery loaded');
//      });
//    }
  };
  // Drupal.settings.ceo_wistia.uid
  $('#dialog').hide();

  // Resume video progress where user last left off.
  wistiaEmbed.time(900 * Drupal.settings.ceo_wistia.progress);

  // Stops video every 900 seconds for user check.
  wistiaEmbed.bind("secondchange", function (s) {
    if(s % 900 == 0 && s != 0) {
      wistiaEmbed.pause();
      $('#dialog').show();
      modal();
      $.ajax({
        url: 'http://localhost/ce-online-training/ceonline-dev/ceo_wistia/progress/' + Drupal.settings.ceo_wistia.nid  + '/' + Drupal.settings.ceo_wistia.uid + '/' + Drupal.settings.ceo_wistia.progress
      });
    }
  });


  // When video ends send user to grantCredit callback.
  wistiaEmbed.bind("end", function () {
    window.location.href == "http://newUrl.com";
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