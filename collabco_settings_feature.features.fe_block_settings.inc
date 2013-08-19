<?php
/**
 * @file
 * collabco_settings_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function collabco_settings_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['iin_navigation_block-iin_navigation_block'] = array(
    'cache' => 1,
    'css_class' => 'iin-feature',
    'custom' => 0,
    'delta' => 'iin_navigation_block',
    'module' => 'iin_navigation_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'openhub' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'openhub',
        'weight' => -33,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['iin_profile_block-iin_profile_block'] = array(
    'cache' => 1,
    'css_class' => 'iin-profile-block',
    'custom' => 0,
    'delta' => 'iin_profile_block',
    'module' => 'iin_profile_block',
    'node_types' => array(),
    'pages' => 'user*
our-vision
services
services/*
members
partners-providers',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'openhub' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'openhub',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'masquerade',
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'openhub' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'openhub',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => 'nobordershadow nobackground',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => 'innovation-capabilities',
    'roles' => array(),
    'themes' => array(
      'openhub' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'openhub',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'openhub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'openhub',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'openhub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'openhub',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'openhub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'openhub',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
