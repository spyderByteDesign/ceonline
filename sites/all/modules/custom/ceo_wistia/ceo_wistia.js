// Auto play video.
wistiaEmbed.play();

wistiaEmbed.bind("secondchange", function (s) {
    if(s === 5) {
      wistiaEmbed.pause();
      // Insert fricking sweet coding logic here.
    }
});

// Wistia API reference.