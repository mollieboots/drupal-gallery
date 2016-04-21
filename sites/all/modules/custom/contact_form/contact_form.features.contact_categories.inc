<?php
/**
 * @file
 * contact_form.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function contact_form_contact_categories_defaults() {
  return array(
    'art inquiry' => array(
      'category' => 'art inquiry',
      'recipients' => 'joseph.karasek@gmail.com',
      'reply' => 'Thank you for your inquiry. I will get back to you as soon as possible.

Hand Made Revival
Michaela Davis',
      'weight' => 1,
      'selected' => 0,
    ),
    'feedback' => array(
      'category' => 'feedback',
      'recipients' => 'joseph.karasek@gmail.com',
      'reply' => 'Your feedback has been sent. Thank you so much.

Hand Made Revival
Michaela Davis',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
