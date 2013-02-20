<?php
/**
 * @file
 * docs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function docs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_node_info().
 */
function docs_node_info() {
  $items = array(
    'documentation_item' => array(
      'name' => t('Documentation Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
