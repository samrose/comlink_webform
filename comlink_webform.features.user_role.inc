<?php
/**
 * @file
 * comlink_webform.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function comlink_webform_user_default_roles() {
  $roles = array();

  // Exported role: Comlink Employee Admin.
  $roles['Comlink Employee Admin'] = array(
    'name' => 'Comlink Employee Admin',
    'weight' => '4',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
