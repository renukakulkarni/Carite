<?php
/**
 * @file
 * deal_management.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function deal_management_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'deal_management_summary';
  $view->description = 'This view consists summary of deals.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Deal Management Summary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stipulation';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_f_name' => 'field_f_name',
    'field_l_name' => 'field_l_name',
    'field_year' => 'field_year',
    'field_make' => 'field_make',
    'field_model' => 'field_model',
    'field_color' => 'field_color',
    'field_email' => 'field_email',
    'field_phone' => 'field_phone',
    'field_advance' => 'field_advance',
    'field_deal_status' => 'field_deal_status',
    'field_date_received' => 'field_date_received',
    'field_date_funded' => 'field_date_funded',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_f_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_l_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_make' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_model' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_advance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_deal_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_funded' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no results to display.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Unique Deal ID */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Unique Deal ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Lessee First Name */
  $handler->display->display_options['fields']['field_f_name']['id'] = 'field_f_name';
  $handler->display->display_options['fields']['field_f_name']['table'] = 'field_data_field_f_name';
  $handler->display->display_options['fields']['field_f_name']['field'] = 'field_f_name';
  $handler->display->display_options['fields']['field_f_name']['ui_name'] = 'Lessee First Name';
  /* Field: Lessee Last Name */
  $handler->display->display_options['fields']['field_l_name']['id'] = 'field_l_name';
  $handler->display->display_options['fields']['field_l_name']['table'] = 'field_data_field_l_name';
  $handler->display->display_options['fields']['field_l_name']['field'] = 'field_l_name';
  $handler->display->display_options['fields']['field_l_name']['ui_name'] = 'Lessee Last Name';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['type'] = 'text_default';
  /* Field: Car Company */
  $handler->display->display_options['fields']['field_make']['id'] = 'field_make';
  $handler->display->display_options['fields']['field_make']['table'] = 'field_data_field_make';
  $handler->display->display_options['fields']['field_make']['field'] = 'field_make';
  $handler->display->display_options['fields']['field_make']['ui_name'] = 'Car Company';
  /* Field: Content: Model */
  $handler->display->display_options['fields']['field_model']['id'] = 'field_model';
  $handler->display->display_options['fields']['field_model']['table'] = 'field_data_field_model';
  $handler->display->display_options['fields']['field_model']['field'] = 'field_model';
  /* Field: Content: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  /* Field: Lessee Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['ui_name'] = 'Lessee Email';
  /* Field: Lessee Phone Number */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Lessee Phone Number';
  /* Field: Content: Advance */
  $handler->display->display_options['fields']['field_advance']['id'] = 'field_advance';
  $handler->display->display_options['fields']['field_advance']['table'] = 'field_data_field_advance';
  $handler->display->display_options['fields']['field_advance']['field'] = 'field_advance';
  $handler->display->display_options['fields']['field_advance']['type'] = 'text_default';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_deal_status']['id'] = 'field_deal_status';
  $handler->display->display_options['fields']['field_deal_status']['table'] = 'field_data_field_deal_status';
  $handler->display->display_options['fields']['field_deal_status']['field'] = 'field_deal_status';
  /* Field: Content: Date received */
  $handler->display->display_options['fields']['field_date_received']['id'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['table'] = 'field_data_field_date_received';
  $handler->display->display_options['fields']['field_date_received']['field'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['settings'] = array(
    'format_type' => 'deal_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date Funded */
  $handler->display->display_options['fields']['field_date_funded']['id'] = 'field_date_funded';
  $handler->display->display_options['fields']['field_date_funded']['table'] = 'field_data_field_date_funded';
  $handler->display->display_options['fields']['field_date_funded']['field'] = 'field_date_funded';
  $handler->display->display_options['fields']['field_date_funded']['settings'] = array(
    'format_type' => 'deal_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'deal_management' => 'deal_management',
  );
  /* Filter criterion: Search by Name or Vehicle */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['ui_name'] = 'Search by Name or Vehicle';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search by Name or Vehicle';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_color' => 'field_color',
    'field_email' => 'field_email',
    'field_f_name' => 'field_f_name',
    'field_l_name' => 'field_l_name',
    'field_make' => 'field_make',
    'field_model' => 'field_model',
    'field_phone' => 'field_phone',
    'field_year' => 'field_year',
  );

  /* Display: Deal Management Summary */
  $handler = $view->new_display('page', 'Deal Management Summary', 'deal_management_summary');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_f_name' => 'field_f_name',
    'field_l_name' => 'field_l_name',
    'field_year' => 'field_year',
    'field_make' => 'field_make',
    'field_model' => 'field_model',
    'field_color' => 'field_color',
    'field_email' => 'field_email',
    'field_phone' => 'field_phone',
    'field_advance' => 'field_advance',
    'field_deal_status' => 'field_deal_status',
    'field_date_received' => 'field_date_received',
    'field_date_funded' => 'field_date_funded',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_f_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_l_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_make' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_model' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_color' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_advance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_deal_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_received' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_funded' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Unique Deal ID */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Unique Deal ID';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Lessee First Name */
  $handler->display->display_options['fields']['field_f_name']['id'] = 'field_f_name';
  $handler->display->display_options['fields']['field_f_name']['table'] = 'field_data_field_f_name';
  $handler->display->display_options['fields']['field_f_name']['field'] = 'field_f_name';
  $handler->display->display_options['fields']['field_f_name']['ui_name'] = 'Lessee First Name';
  /* Field: Lessee Last Name */
  $handler->display->display_options['fields']['field_l_name']['id'] = 'field_l_name';
  $handler->display->display_options['fields']['field_l_name']['table'] = 'field_data_field_l_name';
  $handler->display->display_options['fields']['field_l_name']['field'] = 'field_l_name';
  $handler->display->display_options['fields']['field_l_name']['ui_name'] = 'Lessee Last Name';
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['type'] = 'text_default';
  /* Field: Car Company */
  $handler->display->display_options['fields']['field_make']['id'] = 'field_make';
  $handler->display->display_options['fields']['field_make']['table'] = 'field_data_field_make';
  $handler->display->display_options['fields']['field_make']['field'] = 'field_make';
  $handler->display->display_options['fields']['field_make']['ui_name'] = 'Car Company';
  /* Field: Content: Model */
  $handler->display->display_options['fields']['field_model']['id'] = 'field_model';
  $handler->display->display_options['fields']['field_model']['table'] = 'field_data_field_model';
  $handler->display->display_options['fields']['field_model']['field'] = 'field_model';
  /* Field: Content: Color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  /* Field: Lessee Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['ui_name'] = 'Lessee Email';
  /* Field: Lessee Phone Number */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Lessee Phone Number';
  /* Field: Content: Advance */
  $handler->display->display_options['fields']['field_advance']['id'] = 'field_advance';
  $handler->display->display_options['fields']['field_advance']['table'] = 'field_data_field_advance';
  $handler->display->display_options['fields']['field_advance']['field'] = 'field_advance';
  $handler->display->display_options['fields']['field_advance']['type'] = 'text_default';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_deal_status']['id'] = 'field_deal_status';
  $handler->display->display_options['fields']['field_deal_status']['table'] = 'field_data_field_deal_status';
  $handler->display->display_options['fields']['field_deal_status']['field'] = 'field_deal_status';
  /* Field: Content: Date received */
  $handler->display->display_options['fields']['field_date_received']['id'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['table'] = 'field_data_field_date_received';
  $handler->display->display_options['fields']['field_date_received']['field'] = 'field_date_received';
  $handler->display->display_options['fields']['field_date_received']['settings'] = array(
    'format_type' => 'deal_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date Funded */
  $handler->display->display_options['fields']['field_date_funded']['id'] = 'field_date_funded';
  $handler->display->display_options['fields']['field_date_funded']['table'] = 'field_data_field_date_funded';
  $handler->display->display_options['fields']['field_date_funded']['field'] = 'field_date_funded';
  $handler->display->display_options['fields']['field_date_funded']['settings'] = array(
    'format_type' => 'deal_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Deal';
  $handler->display->display_options['path'] = 'deal-management-summary';

  /* Display: Stipulations */
  $handler = $view->new_display('block', 'Stipulations', 'stipulations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stipulations';
  $handler->display->display_options['display_description'] = 'This displays all stipulations related to a node.';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_status_editable' => 'field_status_editable',
    'field_stipulation_description_editable' => 'field_stipulation_description_editable',
    'name' => 'name',
    'timestamp' => 'timestamp',
    'editableviews_jump_link' => 'editableviews_jump_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_stipulation_description_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'editableviews_jump_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Refer Deal (field_refer_deal) */
  $handler->display->display_options['relationships']['field_refer_deal_nid']['id'] = 'field_refer_deal_nid';
  $handler->display->display_options['relationships']['field_refer_deal_nid']['table'] = 'field_data_field_refer_deal';
  $handler->display->display_options['relationships']['field_refer_deal_nid']['field'] = 'field_refer_deal_nid';
  $handler->display->display_options['relationships']['field_refer_deal_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_refer_deal_nid']['delta'] = '-1';
  /* Relationship: Content: Refer Stipulation (field_refer_stipulation) */
  $handler->display->display_options['relationships']['field_refer_stipulation_tid']['id'] = 'field_refer_stipulation_tid';
  $handler->display->display_options['relationships']['field_refer_stipulation_tid']['table'] = 'field_data_field_refer_stipulation';
  $handler->display->display_options['relationships']['field_refer_stipulation_tid']['field'] = 'field_refer_stipulation_tid';
  $handler->display->display_options['relationships']['field_refer_stipulation_tid']['required'] = TRUE;
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Stipulation';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Status (editable) */
  $handler->display->display_options['fields']['field_status_editable']['id'] = 'field_status_editable';
  $handler->display->display_options['fields']['field_status_editable']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status_editable']['field'] = 'field_status_editable';
  $handler->display->display_options['fields']['field_status_editable']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_status_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_status_editable']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_status_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_status_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_status_editable']['suppress_description'] = 0;
  /* Field: Content: Stipulation Description */
  $handler->display->display_options['fields']['field_stipulation_description']['id'] = 'field_stipulation_description';
  $handler->display->display_options['fields']['field_stipulation_description']['table'] = 'field_data_field_stipulation_description';
  $handler->display->display_options['fields']['field_stipulation_description']['field'] = 'field_stipulation_description';
  $handler->display->display_options['fields']['field_stipulation_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_stipulation_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stipulation_description']['type'] = 'editable';
  $handler->display->display_options['fields']['field_stipulation_description']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'text_default',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'User';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Last Activity';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'deal_date_format';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Status (field_status) */
  $handler->display->display_options['sorts']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['sorts']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['sorts']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_refer_deal_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'stipulation_status' => 'stipulation_status',
  );
  $handler->display->display_options['block_description'] = 'Stipulations Details';
  $export['deal_management_summary'] = $view;

  return $export;
}
