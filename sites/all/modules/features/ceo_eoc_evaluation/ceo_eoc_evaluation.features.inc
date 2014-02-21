<?php
/**
 * @file
 * ceo_eoc_evaluation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ceo_eoc_evaluation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ceo_eoc_evaluation_node_info() {
  $items = array(
    'eoc_evaluation' => array(
      'name' => t('EOC Evaluation'),
      'base' => 'node_content',
      'description' => t('Provides an end of course test for users.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
