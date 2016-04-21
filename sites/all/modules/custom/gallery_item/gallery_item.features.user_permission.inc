<?php
/**
 * @file
 * gallery_item.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gallery_item_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create gallery_item content'.
  $permissions['create gallery_item content'] = array(
    'name' => 'create gallery_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gallery_item content'.
  $permissions['delete any gallery_item content'] = array(
    'name' => 'delete any gallery_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gallery_item content'.
  $permissions['delete own gallery_item content'] = array(
    'name' => 'delete own gallery_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gallery_item content'.
  $permissions['edit any gallery_item content'] = array(
    'name' => 'edit any gallery_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gallery_item content'.
  $permissions['edit own gallery_item content'] = array(
    'name' => 'edit own gallery_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
