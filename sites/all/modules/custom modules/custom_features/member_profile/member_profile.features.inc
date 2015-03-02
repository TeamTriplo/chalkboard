<?php
/**
 * @file
 * member_profile.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function member_profile_default_profile2_type() {
  $items = array();
  $items['member'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "member",
    "label" : "Member profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true },
    "rdf_mapping" : []
  }');
  return $items;
}
