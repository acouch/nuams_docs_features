<?php
/**
 * @file
 * docs.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function docs_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '0',
    'status' => '1',
    'weight' => '1',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_toc' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'tableofcontents' => array(
            'on_off' => array(
              'hide' => 0,
              'automatic' => '0',
              'min_limit' => '5',
            ),
            'box' => array(
              'title' => 'Table of Contents',
              'minlevel' => '2',
              'maxlevel' => '2',
              'hide_show' => 0,
              'collapsed' => 0,
            ),
            'header' => array(
              'id_strip' => array(
                'digits' => 0,
                'dashes' => 0,
                'periods' => 0,
                'underscores' => 0,
                'colons' => 0,
              ),
              'id_prefix' => 'hdr',
              'id_sep' => '-',
              'id_gen' => 'title',
              'allowed' => '<em> <i> <strong> <b> <u> <del> <ins> <sub> <sup> <cite> <strike> <s> <tt> <span> <font> <abbr> <acronym> <dfn> <q> <bdo> <big> <small>',
            ),
            'back_to_top' => array(
              'label' => '',
              'location' => 'bottom',
              'minlevel' => '1',
              'maxlevel' => '1',
              'anchor' => 'toc',
              'scroll' => 0,
            ),
            'numbering' => array(
              'method' => '0',
              'headers' => 0,
              'mode' => '0',
              'prefix' => '',
              'separator' => '.',
              'suffix' => '.',
            ),
          ),
        ),
      ),
      'filter_autop' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
