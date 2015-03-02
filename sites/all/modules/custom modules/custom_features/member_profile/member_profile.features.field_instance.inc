<?php
/**
 * @file
 * member_profile.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function member_profile_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-member-field_address'
  $field_instances['profile2-member-field_address'] = array(
    'bundle' => 'member',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter your home address.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'profile2-member-field_profile_birthday'
  $field_instances['profile2-member-field_profile_birthday'] = array(
    'bundle' => 'member',
    'deleted' => 0,
    'description' => 'Please enter your birthday.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_birthday',
    'label' => 'Birthday',
    'required' => 0,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '-20 years',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '1915:+0',
      ),
      'type' => 'date_popup',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'profile2-member-field_profile_first_name'
  $field_instances['profile2-member-field_profile_first_name'] = array(
    'bundle' => 'member',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter your first name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'profile2-member-field_profile_gender'
  $field_instances['profile2-member-field_profile_gender'] = array(
    'bundle' => 'member',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_gender',
    'label' => 'Gender',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'profile2-member-field_profile_landmark_moments'
  $field_instances['profile2-member-field_profile_landmark_moments'] = array(
    'bundle' => 'member',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please share some landmark moments in your life. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_landmark_moments',
    'label' => 'Landmark moments',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'profile2-member-field_profile_last_name'
  $field_instances['profile2-member-field_profile_last_name'] = array(
    'bundle' => 'member',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter your last/family name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_last_name',
    'label' => 'Last Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Birthday');
  t('First Name');
  t('Gender');
  t('Landmark moments');
  t('Last Name');
  t('Please enter your birthday.');
  t('Please enter your first name.');
  t('Please enter your home address.');
  t('Please enter your last/family name.');
  t('Please share some landmark moments in your life. ');

  return $field_instances;
}
