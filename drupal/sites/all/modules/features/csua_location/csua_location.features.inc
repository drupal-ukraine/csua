<?php
/**
 * @file
 * csua_location.features.inc
 */

/**
 * Implements hook_views_api().
 */
function csua_location_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function csua_location_node_info() {
  $items = array(
    'csua_location' => array(
      'name' => t('Location'),
      'base' => 'node_content',
      'description' => t('Base content type for location module.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
