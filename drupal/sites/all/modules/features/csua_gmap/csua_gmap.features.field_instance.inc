<?php
/**
 * @file
 * csua_gmap.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function csua_gmap_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-gmap-field_gmap'
  $field_instances['node-gmap-field_gmap'] = array(
    'bundle' => 'gmap',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gmap',
    'label' => 'Gmap',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Gmap');

  return $field_instances;
}
