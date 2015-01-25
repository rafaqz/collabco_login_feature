<?php
/**
 * @file
 * login_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function login_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer pre-approved'.
  $permissions['administer pre-approved'] = array(
    'name' => 'administer pre-approved',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'register_preapproved',
  );

  // Exported permission: 'administer pre-approved roles'.
  $permissions['administer pre-approved roles'] = array(
    'name' => 'administer pre-approved roles',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'register_preapproved',
  );

  return $permissions;
}
