<?php
/**
 * @file
 * ceo_custom_video_product_fields.autosku_pattern.inc
 */

/**
 * Implements hook_default_commerce_autosku_patterns().
 */
function ceo_custom_video_product_fields_default_commerce_autosku_patterns() {
  $export = array();

  $commerce_autosku_patterns = new stdClass();
  $commerce_autosku_patterns->disabled = FALSE; /* Edit this to true to make a default commerce_autosku_patterns disabled initially */
  $commerce_autosku_patterns->api_version = 1;
  $commerce_autosku_patterns->product_type = 'video_product_type';
  $commerce_autosku_patterns->pattern = '[commerce-product:product-id]-[commerce-product:title]';
  $commerce_autosku_patterns->advanced = array(
    'update_existing' => 1,
    'hide_sku' => 1,
    'case' => '0',
  );
  $export['video_product_type'] = $commerce_autosku_patterns;

  return $export;
}
