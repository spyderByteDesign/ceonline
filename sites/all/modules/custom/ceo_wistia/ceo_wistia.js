(function ($) {
  Drupal.behaviors.ceo_custom = {
//    attach: function (context, settings) {
//      $(document).ready(function(){
//        alert('jquery loaded');
//      });
//    }



  };
  $('.messages').dialog({ modal: true });

  // Perform checks at second intervals.
  wistiaEmbed.bind("secondchange", function (s) {
    var length = wistiaEmbed.duration();

    // Stop video every 900 seconds.
    if(s % 5 == 0 && s != 0) {
      wistiaEmbed.pause();

    }
  });


  // When video ends.
  wistiaEmbed.bind("end", function () {
    window.location.href == "http://newUrl.com";
  });


}(jQuery));