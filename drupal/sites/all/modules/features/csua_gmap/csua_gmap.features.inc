<?php
/**
 * @file
 * csua_gmap.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function csua_gmap_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function csua_gmap_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function csua_gmap_node_info() {
  $items = array(
    'gmap' => array(
      'name' => t('Gmap'),
      'base' => 'node_content',
      'description' => t('Base content type for gmap module.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
