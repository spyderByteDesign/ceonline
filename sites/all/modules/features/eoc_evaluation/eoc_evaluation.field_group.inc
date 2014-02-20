<?php
/**
 * @file
 * eoc_evaluation.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function eoc_evaluation_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eoc_comments|node|eoc_evaluation|form';
  $field_group->group_name = 'group_eoc_comments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eoc_evaluation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Comments',
    'weight' => '7',
    'children' => array(
      0 => 'field_open_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Comments',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-eoc-comments field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_eoc_comments|node|eoc_evaluation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eoc_course_content|node|eoc_evaluation|form';
  $field_group->group_name = 'group_eoc_course_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eoc_evaluation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Course Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_material_relevance',
      1 => 'field_content_organization',
      2 => 'field_course_interest',
      3 => 'field_example_relevance',
      4 => 'field_topic_organization',
      5 => 'field_learning_activities',
      6 => 'field_agenda_following',
      7 => 'field_course_beneficial',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eoc-course-content field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eoc_course_content|node|eoc_evaluation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eoc_instruction_method|node|eoc_evaluation|form';
  $field_group->group_name = 'group_eoc_instruction_method';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eoc_evaluation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Online Instruction Method',
    'weight' => '6',
    'children' => array(
      0 => 'field_learning_enhancement',
      1 => 'field_tech_satisfaction',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eoc-instruction-method field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eoc_instruction_method|node|eoc_evaluation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eoc_navigation|node|eoc_evaluation|form';
  $field_group->group_name = 'group_eoc_navigation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'eoc_evaluation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Navigation',
    'weight' => '4',
    'children' => array(
      0 => 'field_cosmetology_employment',
      1 => 'field_course_beginning',
      2 => 'field_screen_loading',
      3 => 'field_text_graphics',
      4 => 'field_audio',
      5 => 'field_help_options',
      6 => 'field_restart_modules',
      7 => 'field_completion_time',
      8 => 'field_module_navigation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eoc-navigation field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_eoc_navigation|node|eoc_evaluation|form'] = $field_group;

  return $export;
}
