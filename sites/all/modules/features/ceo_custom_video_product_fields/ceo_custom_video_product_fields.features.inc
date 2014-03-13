<?php
/**
 * @file
 * ceo_custom_video_product_fields.features.inc
 * @copyright Copyright (c) 2014 Spyder Byte Design LLC
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function ceo_custom_video_product_fields_commerce_product_default_types() {
  $items = array(
    'video_product_type' => array(
      'type' => 'video_product_type',
      'name' => 'Video Product Type',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ceo_custom_video_product_fields_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "commerce_autosku" && $api == "autosku_pattern") {
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
function ceo_custom_video_product_fields_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('A course that will be completed via a certain number of videos. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'training_video' => array(
      'name' => t('Training Video'),
      'base' => 'node_content',
      'description' => t('An individual training video.  '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video_product_type' => array(
      'name' => t('Video Product Type'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
