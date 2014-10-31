<?php
/**
 * @file
 * csua_date.features.inc
 */

/**
 * Implements hook_node_info().
 */
function csua_date_node_info() {
  $items = array(
    'csua_date' => array(
      'name' => t('Date'),
      'base' => 'node_content',
      'description' => t('Base content type for date module.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
