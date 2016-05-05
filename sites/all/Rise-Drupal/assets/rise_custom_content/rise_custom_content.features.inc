<?php
/**
 * @file
 * rise_custom_content.features.inc
 */

/**
 * Implements hook_views_api().
 */
function rise_custom_content_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rise_custom_content_node_info() {
  $items = array(
    'about' => array(
      'name' => t('About'),
      'base' => 'node_content',
      'description' => t('Manage content for the Rise front page "about me" block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'blog_page' => array(
      'name' => t('Blog Page'),
      'base' => 'node_content',
      'description' => t('A content type to use as a blank page for the Rise blog view.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'clients' => array(
      'name' => t('Clients'),
      'base' => 'node_content',
      'description' => t('Manage client images for the Rise front page clients block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'contact' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => t('Manage content for the Rise front page "contact" block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'intro' => array(
      'name' => t('Intro'),
      'base' => 'node_content',
      'description' => t('Manage content for the Rise front page introduction block. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'parallax' => array(
      'name' => t('Parallax'),
      'base' => 'node_content',
      'description' => t('Use to create content for a parallax style block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'portfolio' => array(
      'name' => t('Portfolio'),
      'base' => 'node_content',
      'description' => t('Manage content for the Rise front page portfolio block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'skills_and_services' => array(
      'name' => t('Skills and Services'),
      'base' => 'node_content',
      'description' => t('Manage content for the Rise front page "skills and services" block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'testimonials' => array(
      'name' => t('Testimonials'),
      'base' => 'node_content',
      'description' => t('Manage testimonials for the Rise front page clients block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'twitter_feed' => array(
      'name' => t('Twitter Feed'),
      'base' => 'node_content',
      'description' => t('Use to manage Twitter OAuth keys to create a Twitter feed block.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
