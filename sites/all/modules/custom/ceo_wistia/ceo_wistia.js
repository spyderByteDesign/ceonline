(function ($) {
  Drupal.behaviors.ceo_custom = {
//    attach: function (context, settings) {
//      $(document).ready(function(){
//        alert('jquery loaded');
//      });
//    }
  };


  modal();
  $('#dialog').hide();

  // Perform checks at second intervals.
  wistiaEmbed.bind("secondchange", function (s) {
    // Stop video every 900 seconds.
    if(s % 2 == 0 && s != 0) {
      wistiaEmbed.pause();
    }
  });


  // When video ends.
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
        }
      }
    });
  }


}(jQuery));