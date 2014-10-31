<?php
/**
 * @file
 * csua_location.features.inc
 */

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
