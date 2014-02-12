<?php
/**
 * @file
 * eoc_evaluation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eoc_evaluation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_eoc_evaluation';
  $strongarm->value = 0;
  $export['comment_anonymous_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_eoc_evaluation';
  $strongarm->value = 1;
  $export['comment_default_mode_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_eoc_evaluation';
  $strongarm->value = '50';
  $export['comment_default_per_page_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_eoc_evaluation';
  $strongarm->value = '1';
  $export['comment_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_eoc_evaluation';
  $strongarm->value = 1;
  $export['comment_form_location_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_eoc_evaluation';
  $strongarm->value = '1';
  $export['comment_preview_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_eoc_evaluation';
  $strongarm->value = 1;
  $export['comment_subject_field_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_eoc_evaluation';
  $strongarm->value = array();
  $export['field_bundle_settings_comment__comment_node_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__eoc_evaluation';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_eoc_evaluation';
  $strongarm->value = array();
  $export['menu_options_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_eoc_evaluation';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_eoc_evaluation';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_eoc_evaluation';
  $strongarm->value = '0';
  $export['node_preview_eoc_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_eoc_evaluation';
  $strongarm->value = 0;
  $export['node_submitted_eoc_evaluation'] = $strongarm;

  return $export;
}
