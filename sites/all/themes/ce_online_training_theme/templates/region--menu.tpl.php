<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($secondary_menu): ?>
    <nav class="navigation">
      <div class="second-menu inline">
        <?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'inline', 'clearfix', 'secondary-menu')), 'heading' => array('text' => t('Secondary menu'),'level' => 'h2','class' => array('element-invisible')))); ?>
      </div>
    </nav>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
</div>
