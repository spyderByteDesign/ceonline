<?php
/**
 * @file
 * ceo_user_node_permissions.features.user_permission.inc
 * @copyright Copyright (c) 2014 Spyder Byte Design LLC
 */

/**
 * Implements hook_user_default_permissions().
 */
function ceo_user_node_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create course content.
  $permissions['create course content'] = array(
    'name' => 'create course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create eoc_evaluation content.
  $permissions['create eoc_evaluation content'] = array(
    'name' => 'create eoc_evaluation content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create training_video content.
  $permissions['create training_video content'] = array(
    'name' => 'create training_video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create video_product_type content.
  $permissions['create video_product_type content'] = array(
    'name' => 'create video_product_type content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any course content.
  $permissions['delete any course content'] = array(
    'name' => 'delete any course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any eoc_evaluation content.
  $permissions['delete any eoc_evaluation content'] = array(
    'name' => 'delete any eoc_evaluation content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any training_video content.
  $permissions['delete any training_video content'] = array(
    'name' => 'delete any training_video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any video_product_type content.
  $permissions['delete any video_product_type content'] = array(
    'name' => 'delete any video_product_type content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own course content.
  $permissions['delete own course content'] = array(
    'name' => 'delete own course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own eoc_evaluation content.
  $permissions['delete own eoc_evaluation content'] = array(
    'name' => 'delete own eoc_evaluation content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own training_video content.
  $permissions['delete own training_video content'] = array(
    'name' => 'delete own training_video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own video_product_type content.
  $permissions['delete own video_product_type content'] = array(
    'name' => 'delete own video_product_type content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any course content.
  $permissions['edit any course content'] = array(
    'name' => 'edit any course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any eoc_evaluation content.
  $permissions['edit any eoc_evaluation content'] = array(
    'name' => 'edit any eoc_evaluation content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any training_video content.
  $permissions['edit any training_video content'] = array(
    'name' => 'edit any training_video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any video_product_type content.
  $permissions['edit any video_product_type content'] = array(
    'name' => 'edit any video_product_type content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own course content.
  $permissions['edit own course content'] = array(
    'name' => 'edit own course content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own eoc_evaluation content.
  $permissions['edit own eoc_evaluation content'] = array(
    'name' => 'edit own eoc_evaluation content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own training_video content.
  $permissions['edit own training_video content'] = array(
    'name' => 'edit own training_video content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own video_product_type content.
  $permissions['edit own video_product_type content'] = array(
    'name' => 'edit own video_product_type content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
