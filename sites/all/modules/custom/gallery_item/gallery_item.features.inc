<?php
/**
 * @file
 * gallery_item.features.inc
 */

/**
 * Implements hook_node_info().
 */
function gallery_item_node_info() {
  $items = array(
    'gallery_item' => array(
      'name' => t('Gallery Item'),
      'base' => 'node_content',
      'description' => t('An art piece for the gallery.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
