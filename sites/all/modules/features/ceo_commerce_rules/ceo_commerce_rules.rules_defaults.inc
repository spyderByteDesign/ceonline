<?php
/**
 * @file
 * ceo_commerce_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ceo_commerce_rules_default_rules_configuration() {
  $items = array();
  $items['rules_view_videos'] = entity_import('rules_config', '{ "rules_view_videos" : {
      "LABEL" : "View videos",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "CEO" ],
      "REQUIRES" : [ "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [ { "redirect" : { "url" : "user\\/[site:current-user:uid]\\/videos" } } ]
    }
  }');
  return $items;
}
