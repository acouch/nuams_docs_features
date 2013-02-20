<?php
/**
 * @file
 * docs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function docs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'docs_node';
  $context->description = 'Customizations for the Documentation Item node';
  $context->tag = 'Docs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'documentation_item' => 'documentation_item',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'docs-docs_toc' => array(
          'module' => 'docs',
          'delta' => 'docs_toc',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'book-navigation' => array(
          'module' => 'book',
          'delta' => 'navigation',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Customizations for the Documentation Item node');
  t('Docs');
  $export['docs_node'] = $context;

  return $export;
}
