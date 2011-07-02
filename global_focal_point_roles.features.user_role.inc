<?php
/**
 * @file
 * global_focal_point_roles.features.user_role.inc
 */

/**
 * Implementation of hook_user_default_roles().
 */
function global_focal_point_roles_user_default_roles() {
  $roles = array();

  // Exported role: prototype builder
  $roles['prototype builder'] = array(
    'name' => 'prototype builder',
    'weight' => '6',
  );

  // Exported role: trace only
  $roles['trace only'] = array(
    'name' => 'trace only',
    'weight' => '3',
  );

  // Exported role: track routes
  $roles['track routes'] = array(
    'name' => 'track routes',
    'weight' => '5',
  );

  // Exported role: track shipments in transit
  $roles['track shipments in transit'] = array(
    'name' => 'track shipments in transit',
    'weight' => '4',
  );

  return $roles;
}
