<?php
/**
 * @file
 * nycc_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nycc_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nycc_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nycc_pages_node_info() {
  $items = array(
    'article' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Create a news article and specify where you\'d like it to appear (ie. corporate or service news).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landing_page' => array(
      'name' => t('Landing page'),
      'base' => 'node_content',
      'description' => t('Landing pages display a series of icons that link to sub-pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'marketplace_for_sale' => array(
      'name' => t('Marketplace'),
      'base' => 'node_content',
      'description' => t('List an item for sale or post a wanted item.'),
      'has_title' => '1',
      'title_label' => t('Title of item'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('This is a content page that will appear in standard navigation menus.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'policy_document' => array(
      'name' => t('Policy'),
      'base' => 'node_content',
      'description' => t('Use this option to create a web version of a policy (rather than a pdf/word document).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    't_c_service_notice' => array(
      'name' => t('T & C Service notice'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
