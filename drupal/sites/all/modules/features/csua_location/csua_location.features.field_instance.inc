<?php
/**
 * @file
 * csua_location.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function csua_location_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-csua_location-field_location'
  $field_instances['node-csua_location-field_location'] = array(
    'bundle' => 'csua_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'location_cck',
      'settings' => array(),
      'type' => 'location',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('location');

  return $field_instances;
}
