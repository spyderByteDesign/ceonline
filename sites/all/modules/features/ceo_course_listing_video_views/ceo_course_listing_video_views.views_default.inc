<?php
/**
 * @file
 * ceo_course_listing_video_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ceo_course_listing_video_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
  /* Relationship: Content: Course (field_training_course) */
  $handler->display->display_options['relationships']['field_training_course_tid']['id'] = 'field_training_course_tid';
  $handler->display->display_options['relationships']['field_training_course_tid']['table'] = 'field_data_field_training_course';
  $handler->display->display_options['relationships']['field_training_course_tid']['field'] = 'field_training_course_tid';
  /* Relationship: Taxonomy term: Content using Corse Reference */
  $handler->display->display_options['relationships']['reverse_field_corse_reference_node']['id'] = 'reverse_field_corse_reference_node';
  $handler->display->display_options['relationships']['reverse_field_corse_reference_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_corse_reference_node']['field'] = 'reverse_field_corse_reference_node';
  $handler->display->display_options['relationships']['reverse_field_corse_reference_node']['relationship'] = 'field_training_course_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Credits Required */
  $handler->display->display_options['fields']['field_credits_required']['id'] = 'field_credits_required';
  $handler->display->display_options['fields']['field_credits_required']['table'] = 'field_data_field_credits_required';
  $handler->display->display_options['fields']['field_credits_required']['field'] = 'field_credits_required';
  $handler->display->display_options['fields']['field_credits_required']['relationship'] = 'reverse_field_corse_reference_node';
  $handler->display->display_options['fields']['field_credits_required']['label'] = 'Credits';
  $handler->display->display_options['fields']['field_credits_required']['element_type'] = '0';
  $handler->display->display_options['fields']['field_credits_required']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_credits_required']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_credits_required']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_credits_required']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'reverse_field_corse_reference_node';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 'product';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Product display */
  $handler->display->display_options['filters']['is_product_display']['id'] = 'is_product_display';
  $handler->display->display_options['filters']['is_product_display']['table'] = 'node';
  $handler->display->display_options['filters']['is_product_display']['field'] = 'is_product_display';
  $handler->display->display_options['filters']['is_product_display']['value'] = '1';
  /* Filter criterion: Content: Product is a Package (field_product_is_a_package) */
  $handler->display->display_options['filters']['field_product_is_a_package_value']['id'] = 'field_product_is_a_package_value';
  $handler->display->display_options['filters']['field_product_is_a_package_value']['table'] = 'field_data_field_product_is_a_package';
  $handler->display->display_options['filters']['field_product_is_a_package_value']['field'] = 'field_product_is_a_package_value';
  $handler->display->display_options['filters']['field_product_is_a_package_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'course-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Course List';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['course_listing'] = $view;

  $view = new view();
  $view->name = 'course_videos';
  $view->description = '';
  $view->tag = 'ceo';
  $view->base_table = 'node';
  $view->human_name = 'Course Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Course Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Course */
  $handler->display->display_options['fields']['field_training_course']['id'] = 'field_training_course';
  $handler->display->display_options['fields']['field_training_course']['table'] = 'field_data_field_training_course';
  $handler->display->display_options['fields']['field_training_course']['field'] = 'field_training_course';
  $handler->display->display_options['fields']['field_training_course']['label'] = '';
  $handler->display->display_options['fields']['field_training_course']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_course']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_course']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_training_course']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_training_course']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Course Order (field_course_order) */
  $handler->display->display_options['sorts']['field_course_order_value']['id'] = 'field_course_order_value';
  $handler->display->display_options['sorts']['field_course_order_value']['table'] = 'field_data_field_course_order';
  $handler->display->display_options['sorts']['field_course_order_value']['field'] = 'field_course_order_value';
  $handler->display->display_options['sorts']['field_course_order_value']['order'] = 'DESC';
  /* Contextual filter: Content: Course (field_training_course) */
  $handler->display->display_options['arguments']['field_training_course_tid']['id'] = 'field_training_course_tid';
  $handler->display->display_options['arguments']['field_training_course_tid']['table'] = 'field_data_field_training_course';
  $handler->display->display_options['arguments']['field_training_course_tid']['field'] = 'field_training_course_tid';
  $handler->display->display_options['arguments']['field_training_course_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_training_course_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_training_course_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_training_course_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'training_video' => 'training_video',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Course';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'training_course';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_videos_target_id']['id'] = 'field_videos_target_id';
  $handler->display->display_options['relationships']['field_videos_target_id']['table'] = 'field_data_field_videos';
  $handler->display->display_options['relationships']['field_videos_target_id']['field'] = 'field_videos_target_id';
  $handler->display->display_options['relationships']['field_videos_target_id']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_videos_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Course */
  $handler->display->display_options['fields']['field_training_course']['id'] = 'field_training_course';
  $handler->display->display_options['fields']['field_training_course']['table'] = 'field_data_field_training_course';
  $handler->display->display_options['fields']['field_training_course']['field'] = 'field_training_course';
  $handler->display->display_options['fields']['field_training_course']['label'] = '';
  $handler->display->display_options['fields']['field_training_course']['element_type'] = '0';
  $handler->display->display_options['fields']['field_training_course']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_course']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_training_course']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_training_course']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_videos_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 'product';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Course';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'training_course';
  /* Filter criterion: Content: Product display */
  $handler->display->display_options['filters']['is_product_display']['id'] = 'is_product_display';
  $handler->display->display_options['filters']['is_product_display']['table'] = 'node';
  $handler->display->display_options['filters']['is_product_display']['field'] = 'is_product_display';
  $handler->display->display_options['filters']['is_product_display']['value'] = '1';
  /* Filter criterion: Content: Product is a Package (field_product_is_a_package) */
  $handler->display->display_options['filters']['field_product_is_a_package_value']['id'] = 'field_product_is_a_package_value';
  $handler->display->display_options['filters']['field_product_is_a_package_value']['table'] = 'field_data_field_product_is_a_package';
  $handler->display->display_options['filters']['field_product_is_a_package_value']['field'] = 'field_product_is_a_package_value';
  $handler->display->display_options['filters']['field_product_is_a_package_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'videos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Videos';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Videos';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['path'] = 'user/%/videos';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Videos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Course Videos */
  $handler = $view->new_display('block', 'Course Videos', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
  /* Relationship: Content: Course (field_training_course) */
  $handler->display->display_options['relationships']['field_training_course_tid']['id'] = 'field_training_course_tid';
  $handler->display->display_options['relationships']['field_training_course_tid']['table'] = 'field_data_field_training_course';
  $handler->display->display_options['relationships']['field_training_course_tid']['field'] = 'field_training_course_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Course Order (field_course_order) */
  $handler->display->display_options['sorts']['field_course_order_value']['id'] = 'field_course_order_value';
  $handler->display->display_options['sorts']['field_course_order_value']['table'] = 'field_data_field_course_order';
  $handler->display->display_options['sorts']['field_course_order_value']['field'] = 'field_course_order_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Course (field_training_course) */
  $handler->display->display_options['arguments']['field_training_course_tid']['id'] = 'field_training_course_tid';
  $handler->display->display_options['arguments']['field_training_course_tid']['table'] = 'field_data_field_training_course';
  $handler->display->display_options['arguments']['field_training_course_tid']['field'] = 'field_training_course_tid';
  $handler->display->display_options['arguments']['field_training_course_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_training_course_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_training_course_tid']['default_argument_options']['argument'] = 'South Carolina Accreditation course';
  $handler->display->display_options['arguments']['field_training_course_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_training_course_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_training_course_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_training_course_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_training_course_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_training_course_tid']['validate_options']['vocabularies'] = array(
    'training_course' => 'training_course',
  );
  $handler->display->display_options['arguments']['field_training_course_tid']['validate_options']['type'] = 'convert';
  $export['course_videos'] = $view;

  return $export;
}
