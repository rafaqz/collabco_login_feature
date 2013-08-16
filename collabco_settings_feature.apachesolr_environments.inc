<?php
/**
 * @file
 * collabco_settings_feature.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function collabco_settings_feature_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'solr';
  $environment->url = 'http://localhost:8080/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'comment' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'field_collection_item' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'mandrill_template_map' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'message_type_category' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'message_type' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'message' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => '1376631646',
        'last_entity_id' => '436',
      ),
      'og_membership_type' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'og_membership' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'profile2' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'profile2_type' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'file' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_term' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_vocabulary' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'user' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
    ),
    'apachesolr_index_updated' => 1376633774,
    'apachesolr_last_optimize' => 1376600781,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '0:0',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '21.0',
    'apachesolr_search_type_boosts' => array(
      'basic_page' => '0',
      'challenge' => '0',
      'discussion' => '0',
      'group' => '0',
      'wiki_page' => '0',
    ),
    'field_bias' => array(
      'bm_group_group' => '0',
      'bs_group_group' => '0',
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '1.0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_supporting_discussion' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'label' => '5.0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_og_group_ref' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'timestamp' => '0',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0.5',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'basic_page',
      1 => 'discussion',
      2 => 'event',
      3 => 'group',
      4 => 'knowledge_object',
      5 => 'organisation',
      6 => 'service',
      7 => 'slide',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
