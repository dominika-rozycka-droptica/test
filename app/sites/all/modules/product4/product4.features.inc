<?php
/**
 * @file
 * product4.features.inc
 */

/**
 * Implements hook_node_info().
 */
function product4_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Product name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
