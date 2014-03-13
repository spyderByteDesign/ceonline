<?php
/**
 * @file
 * ceo_user_node_permissions.features.user_role.inc
 * @copyright Copyright (c) 2014 Spyder Byte Design LLC
 */

/**
 * Implements hook_user_default_roles().
 */
function ceo_user_node_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
