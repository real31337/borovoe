<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Two Column 8-4'),
  'category' => t('Bootstrap'),
  'icon' => 'bootstrap_twocol_8_4.png',
  'theme' => 'bootstrap_twocol_8_4',
  'admin css' => '../bootstrap_panels_admin.css',
  'regions' => array(
    'left' => t('Left side'),
    'right' => t('Right side')
  ),
);
