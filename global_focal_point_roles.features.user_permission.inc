<?php
/**
 * @file
 * global_focal_point_roles.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function global_focal_point_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: fctc/tracing
  $permissions['fctc/tracing'] = array(
    'name' => 'fctc/tracing',
    'roles' => array(
      0 => 'prototype builder',
      1 => 'trace only',
      2 => 'track routes',
      3 => 'track shipments in transit',
    ),
    'module' => 'fctc',
  );

  // Exported permission: fctc/tracking/in-transit
  $permissions['fctc/tracking/in-transit'] = array(
    'name' => 'fctc/tracking/in-transit',
    'roles' => array(
      0 => 'prototype builder',
      1 => 'track routes',
      2 => 'track shipments in transit',
    ),
    'module' => 'fctc',
  );

  // Exported permission: fctc/tracking/query-tool-a
  $permissions['fctc/tracking/query-tool-a'] = array(
    'name' => 'fctc/tracking/query-tool-a',
    'roles' => array(
      0 => 'prototype builder',
    ),
    'module' => 'fctc',
  );

  // Exported permission: fctc/tracking/query-tool-b
  $permissions['fctc/tracking/query-tool-b'] = array(
    'name' => 'fctc/tracking/query-tool-b',
    'roles' => array(
      0 => 'prototype builder',
    ),
    'module' => 'fctc',
  );

  // Exported permission: fctc/tracking/routes-a
  $permissions['fctc/tracking/routes-a'] = array(
    'name' => 'fctc/tracking/routes-a',
    'roles' => array(
      0 => 'prototype builder',
      1 => 'track routes',
    ),
    'module' => 'fctc',
  );

  // Exported permission: fctc/tracking/routes-b
  $permissions['fctc/tracking/routes-b'] = array(
    'name' => 'fctc/tracking/routes-b',
    'roles' => array(
      0 => 'prototype builder',
      1 => 'track routes',
    ),
    'module' => 'fctc',
  );

  return $permissions;
}
