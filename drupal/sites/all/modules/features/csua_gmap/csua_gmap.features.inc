<?php
/**
 * @file
 * csua_gmap.features.inc
 */

/**
 * Implements hook_node_info().
 */
function csua_gmap_node_info() {
  $items = array(
    'gmap' => array(
      'name' => t('Gmap'),
      'base' => 'node_content',
      'description' => t('Gmap'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
