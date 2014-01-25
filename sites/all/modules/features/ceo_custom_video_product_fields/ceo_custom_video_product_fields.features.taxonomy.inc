<?php
/**
 * @file
 * ceo_custom_video_product_fields.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ceo_custom_video_product_fields_taxonomy_default_vocabularies() {
  return array(
    'training_course' => array(
      'name' => 'Training Course',
      'machine_name' => 'training_course',
      'description' => 'This vocabulary is to be used to tag a given video/video package with the course(s) that it applies to.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
