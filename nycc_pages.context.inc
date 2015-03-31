<?php
/**
 * @file
 * nycc_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nycc_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = '2020';
  $context->description = '';
  $context->tag = 'Service Hub';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/2020' => 'content/2020',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-2020_news-block' => array(
          'module' => 'views',
          'delta' => '2020_news-block',
          'region' => 'home_news',
          'weight' => '-10',
        ),
        'menu_block-4' => array(
          'module' => 'menu_block',
          'delta' => '4',
          'region' => 'home_right',
          'weight' => '-10',
        ),
        'views-2020_top_tasks-block' => array(
          'module' => 'views',
          'delta' => '2020_top_tasks-block',
          'region' => 'home_right',
          'weight' => '-9',
        ),
        'views-landing_page_icons-block' => array(
          'module' => 'views',
          'delta' => 'landing_page_icons-block',
          'region' => 'home_full',
          'weight' => '-10',
        ),
      ),
      'layout' => 'service-home',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Service Hub');
  $export['2020'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = '2020-news-context';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        8973 => 8973,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '2020-news*' => '2020-news*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-2020_news_browser-block' => array(
          'module' => 'views',
          'delta' => '2020_news_browser-block',
          'region' => '3_col_left',
          'weight' => '-9',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['2020-news-context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atoz';
  $context->description = '';
  $context->tag = 'A to Z';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'a-z*' => 'a-z*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-a-z-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-a-z-menu',
          'region' => 'content',
          'weight' => '-68',
        ),
      ),
      'layout' => 'fullwidth',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A to Z');
  $export['atoz'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'base_context';
  $context->description = '';
  $context->tag = 'Base';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'workbench-block' => array(
          'module' => 'workbench',
          'delta' => 'block',
          'region' => 'content',
          'weight' => '-66',
        ),
        'nycc_social_icons-nycc_social_footer' => array(
          'module' => 'nycc_social_icons',
          'delta' => 'nycc_social_footer',
          'region' => 'footer',
          'weight' => '-68',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer',
          'weight' => '-67',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'footer',
          'weight' => '-66',
        ),
        'views-admin_page_info-block' => array(
          'module' => 'views',
          'delta' => 'admin_page_info-block',
          'region' => 'footer',
          'weight' => '-65',
        ),
        'views-678e61867bba38d4e9fb95096b44df66' => array(
          'module' => 'views',
          'delta' => '678e61867bba38d4e9fb95096b44df66',
          'region' => 'footer',
          'weight' => '-64',
        ),
        'views-c5ddbfcc303123dfb9d9c70eba1ae6c0' => array(
          'module' => 'views',
          'delta' => 'c5ddbfcc303123dfb9d9c70eba1ae6c0',
          'region' => 'footer',
          'weight' => '-63',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'topsearch',
          'weight' => '-10',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'topmenu',
          'weight' => '-10',
        ),
        'views-alerts-alerts_block' => array(
          'module' => 'views',
          'delta' => 'alerts-alerts_block',
          'region' => 'topbar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Base');
  $export['base_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'basic_page';
  $context->description = '';
  $context->tag = 'Page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => '3_col_left',
          'weight' => '-58',
        ),
        'views-6f96eee322de439145b0cefdbf4677c0' => array(
          'module' => 'views',
          'delta' => '6f96eee322de439145b0cefdbf4677c0',
          'region' => '3_col_right',
          'weight' => '-58',
        ),
        'views-013f1a9499fd3e228acb440d35c4e05c' => array(
          'module' => 'views',
          'delta' => '013f1a9499fd3e228acb440d35c4e05c',
          'region' => '3_col_right',
          'weight' => '-57',
        ),
        'views-46346282751452a3808d6f57872e0ea2' => array(
          'module' => 'views',
          'delta' => '46346282751452a3808d6f57872e0ea2',
          'region' => '3_col_right',
          'weight' => '-56',
        ),
        'views-aa4871bab6565f42ab8165bb2ada835f' => array(
          'module' => 'views',
          'delta' => 'aa4871bab6565f42ab8165bb2ada835f',
          'region' => '3_col_right',
          'weight' => '-55',
        ),
        'views-basic_page_related_links-block' => array(
          'module' => 'views',
          'delta' => 'basic_page_related_links-block',
          'region' => '3_col_right',
          'weight' => '-54',
        ),
        'views-18dea8f2eaeb3995c52ca8db7620e44f' => array(
          'module' => 'views',
          'delta' => '18dea8f2eaeb3995c52ca8db7620e44f',
          'region' => '3_col_right',
          'weight' => '-53',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page');
  $export['basic_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = '';
  $context->tag = 'Blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog*' => 'blog*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-52e32336ecabaa843b1c938e9f2d82e5' => array(
          'module' => 'views',
          'delta' => '52e32336ecabaa843b1c938e9f2d82e5',
          'region' => '3_col_left',
          'weight' => '-56',
        ),
        'views-blog_authors_new-block' => array(
          'module' => 'views',
          'delta' => 'blog_authors_new-block',
          'region' => '3_col_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  $export['blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog-menu';
  $context->description = '';
  $context->tag = 'Blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog/posts-by-date*' => 'blog/posts-by-date*',
        '~blog/chief-execs-message*' => '~blog/chief-execs-message*',
        'blog/0*' => 'blog/0*',
        'blog/1*' => 'blog/1*',
        'blog/2*' => 'blog/2*',
        'blog/3*' => 'blog/3*',
        'blog/4*' => 'blog/4*',
        'blog/5*' => 'blog/5*',
        'blog/6*' => 'blog/6*',
        'blog/7*' => 'blog/7*',
        'blog/8*' => 'blog/8*',
        'blog/9*' => 'blog/9*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  $export['blog-menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_posts_by_date';
  $context->description = '';
  $context->tag = 'Blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog/posts-by-date*' => 'blog/posts-by-date*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_entries_by_date-block' => array(
          'module' => 'views',
          'delta' => 'blog_entries_by_date-block',
          'region' => '3_col_left',
          'weight' => '-57',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  $export['blog_posts_by_date'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'chief-exec-message';
  $context->description = '';
  $context->tag = 'Blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog/chief-execs-message' => 'blog/chief-execs-message',
        'blog/richard-flinton' => 'blog/richard-flinton',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  $export['chief-exec-message'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'chief-exec-message-context';
  $context->description = '';
  $context->tag = 'Blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'blog/chief-execs-message/posts-by-date*' => 'blog/chief-execs-message/posts-by-date*',
        'blog/178' => 'blog/178',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => '0',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  $export['chief-exec-message-context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'clone_of_user_profile_media';
  $context->description = '';
  $context->tag = 'Profile';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/*/imce' => 'user/*/imce',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'fullwidth',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Profile');
  $export['clone_of_user_profile_media'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'confirm_read';
  $context->description = 'Context to display read confirmation flag to the user when enabled in the node';
  $context->tag = 'Confirm Read';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:14:{s:4:"node";s:4:"node";s:7:"comment";i:0;s:8:"flagging";i:0;s:21:"message_type_category";i:0;s:12:"message_type";i:0;s:7:"message";i:0;s:18:"og_membership_type";i:0;s:13:"og_membership";i:0;s:8:"redirect";i:0;s:4:"file";i:0;s:13:"taxonomy_term";i:0;s:19:"taxonomy_vocabulary";i:0;s:4:"user";i:0;s:12:"rules_config";i:0;}',
        'field_name' => 'field_user_read_confirmation',
        'field_value' => '1',
        'field_empty' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-confirm_read-block' => array(
          'module' => 'views',
          'delta' => 'confirm_read-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Confirm Read');
  t('Context to display read confirmation flag to the user when enabled in the node');
  $export['confirm_read'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'corporate-news-context';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        5105 => 5105,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'corp-news*' => 'corp-news*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-corporate_news_browser-block' => array(
          'module' => 'views',
          'delta' => 'corporate_news_browser-block',
          'region' => '3_col_left',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['corporate-news-context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ess';
  $context->description = '';
  $context->tag = 'Service Hub';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/ess' => 'content/ess',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-landing_page_icons-block' => array(
          'module' => 'views',
          'delta' => 'landing_page_icons-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-678d01bbcf4393bd08092472df6c0955' => array(
          'module' => 'views',
          'delta' => '678d01bbcf4393bd08092472df6c0955',
          'region' => '3_col_left',
          'weight' => '-10',
        ),
        'views-ess_top_tasks-block' => array(
          'module' => 'views',
          'delta' => 'ess_top_tasks-block',
          'region' => '3_col_right',
          'weight' => '-8',
        ),
        'views-957f05141cded67b2b89e1f25d2bc70d' => array(
          'module' => 'views',
          'delta' => '957f05141cded67b2b89e1f25d2bc70d',
          'region' => '3_col_center',
          'weight' => '-10',
        ),
      ),
      'layout' => 'home3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Service Hub');
  $export['ess'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'esswhiteboard';
  $context->description = '';
  $context->tag = 'Applications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/employment-support-whiteboard*' => 'content/employment-support-whiteboard*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ess_whiteboard-block' => array(
          'module' => 'views',
          'delta' => 'ess_whiteboard-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Applications');
  $export['esswhiteboard'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'esswhiteboard-menu-breadcrumb';
  $context->description = '';
  $context->tag = 'Applications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'esswhiteboard*' => 'esswhiteboard*',
        'content/employment-support-services-notice-board*' => 'content/employment-support-services-notice-board*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ess_whiteboard-block' => array(
          'module' => 'views',
          'delta' => 'ess_whiteboard-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard3col',
    ),
    'breadcrumb' => 'node/2838',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Applications');
  $export['esswhiteboard-menu-breadcrumb'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'feedback';
  $context->description = '';
  $context->tag = 'Feedback';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/add/feedback-form' => 'node/add/feedback-form',
        'content/query-feedback-confirmation-page' => 'content/query-feedback-confirmation-page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => '3_col_left',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard3col',
    ),
    'breadcrumb' => 'node/3426',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feedback');
  $export['feedback'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'feedback-button';
  $context->description = '';
  $context->tag = 'Feedback';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/search-tips-and-guidance' => 'content/search-tips-and-guidance',
        'content/finding-your-way-around-intranet' => 'content/finding-your-way-around-intranet',
        'content/policy-guidance' => 'content/policy-guidance',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => '3_col_right',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feedback');
  $export['feedback-button'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Changes layout to home on frontpage';
  $context->tag = 'Front';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-spotlight-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-spotlight-menu',
          'region' => 'home_right',
          'weight' => '-10',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'home_right',
          'weight' => '-9',
        ),
        'views-my_top_tasks-block' => array(
          'module' => 'views',
          'delta' => 'my_top_tasks-block',
          'region' => 'home_right',
          'weight' => '-8',
        ),
        'views-top_tasks-block' => array(
          'module' => 'views',
          'delta' => 'top_tasks-block',
          'region' => 'home_right',
          'weight' => '-7',
        ),
        'views-alerts_history-block_1' => array(
          'module' => 'views',
          'delta' => 'alerts_history-block_1',
          'region' => 'home_main',
          'weight' => '-10',
        ),
      ),
      'layout' => 'home',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Changes layout to home on frontpage');
  t('Front');
  $export['front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'google-search-result';
  $context->description = 'Display guidance for user re. searching for google';
  $context->tag = 'Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/site/google' => 'search/site/google',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-18' => array(
          'module' => 'block',
          'delta' => '18',
          'region' => 'content',
          'weight' => '-74',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display guidance for user re. searching for google');
  t('Search');
  $export['google-search-result'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'holiday-entitlement';
  $context->description = '';
  $context->tag = 'Applications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/holiday-entitlement-calculator' => 'content/holiday-entitlement-calculator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'content',
          'weight' => '-10',
        ),
        'nycc_forms-holiday_entitlement_form_block' => array(
          'module' => 'nycc_forms',
          'delta' => 'holiday_entitlement_form_block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Applications');
  $export['holiday-entitlement'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'individual-blog-entry-lhs-month';
  $context->description = '';
  $context->tag = 'Blogs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_entries_by_date-block' => array(
          'module' => 'views',
          'delta' => 'blog_entries_by_date-block',
          'region' => '3_col_left',
          'weight' => '-10',
        ),
        'views-52e32336ecabaa843b1c938e9f2d82e5' => array(
          'module' => 'views',
          'delta' => '52e32336ecabaa843b1c938e9f2d82e5',
          'region' => '3_col_left',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  $export['individual-blog-entry-lhs-month'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'internal_job_search';
  $context->description = '';
  $context->tag = 'Applications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/internal-job-search' => 'content/internal-job-search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'fullwidth',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Applications');
  $export['internal_job_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'juice-home';
  $context->description = '';
  $context->tag = 'Test';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/juice' => 'content/juice',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'fullwidth',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Test');
  $export['juice-home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'key-messages-home';
  $context->description = '';
  $context->tag = 'Key messages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'keymessages' => 'keymessages',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-key_messages-block' => array(
          'module' => 'views',
          'delta' => 'key_messages-block',
          'region' => '3_col_left',
          'weight' => '-10',
        ),
        'menu-menu-key-messages' => array(
          'module' => 'menu',
          'delta' => 'menu-key-messages',
          'region' => '3_col_right',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard3col',
    ),
    'breadcrumb' => '0',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Key messages');
  $export['key-messages-home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'key-messages-items';
  $context->description = '';
  $context->tag = 'Key messages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'keymessages*' => 'keymessages*',
        '~keymessages' => '~keymessages',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-key_messages-block' => array(
          'module' => 'views',
          'delta' => 'key_messages-block',
          'region' => '3_col_left',
          'weight' => '-10',
        ),
        'menu-menu-key-messages' => array(
          'module' => 'menu',
          'delta' => 'menu-key-messages',
          'region' => '3_col_right',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard3col',
    ),
    'breadcrumb' => 'keymessages',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Key messages');
  $export['key-messages-items'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_pages';
  $context->description = '';
  $context->tag = 'Landing page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'landing_page' => 'landing_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-landing_page_icons-block' => array(
          'module' => 'views',
          'delta' => 'landing_page_icons-block',
          'region' => 'content',
          'weight' => '9',
        ),
        'views-landing_page_more-block' => array(
          'module' => 'views',
          'delta' => 'landing_page_more-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
      'layout' => 'fullwidth',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Landing page');
  $export['landing_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'login';
  $context->description = '';
  $context->tag = 'Login';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user*' => 'user*',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'content',
          'weight' => '-8',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'content',
          'weight' => '-7',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
      'layout' => 'basic-centred',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Login');
  $export['login'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marketplace';
  $context->description = '';
  $context->tag = 'Marketplace';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/marketplace' => 'content/marketplace',
        '~node/add/marketplace-for-sale' => '~node/add/marketplace-for-sale',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-marketplace-block_1' => array(
          'module' => 'views',
          'delta' => 'marketplace-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-marketplace-block' => array(
          'module' => 'views',
          'delta' => 'marketplace-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'menu-menu-marketplace-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-marketplace-menu',
          'region' => '2_col_right',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard2col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Marketplace');
  $export['marketplace'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marketplace_new_item';
  $context->description = '';
  $context->tag = 'Marketplace';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/add/marketplace-for-sale' => 'node/add/marketplace-for-sale',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-marketplace-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-marketplace-menu',
          'region' => '2_col_right',
          'weight' => '0',
        ),
      ),
      'layout' => 'standard2col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Marketplace');
  $export['marketplace_new_item'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'marketplace_nodes';
  $context->description = '';
  $context->tag = 'Marketplace';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'marketplace_for_sale' => 'marketplace_for_sale',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'termsandconditions' => 'termsandconditions',
      ),
    ),
    'views' => array(
      'values' => array(
        'marketplace:page_1' => 'marketplace:page_1',
        'marketplace:page_2' => 'marketplace:page_2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-marketplace-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-marketplace-menu',
          'region' => '2_col_right',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard2col',
    ),
    'breadcrumb' => 'node/227',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Marketplace');
  $export['marketplace_nodes'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'maternity-entitlement';
  $context->description = '';
  $context->tag = 'Applications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/maternity-leave-entitlement-calculator' => 'content/maternity-leave-entitlement-calculator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'content',
          'weight' => '-10',
        ),
        'nycc_forms-maternity_calculator_form_block' => array(
          'module' => 'nycc_forms',
          'delta' => 'maternity_calculator_form_block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Applications');
  $export['maternity-entitlement'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'members-news-context';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        8179 => 8179,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'content/members/mem-news*' => 'content/members/mem-news*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-members_news-block_2' => array(
          'module' => 'views',
          'delta' => 'members_news-block_2',
          'region' => '3_col_left',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard3col',
    ),
    'breadcrumb' => 'node/693',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['members-news-context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_related_content';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_related_content-block' => array(
          'module' => 'views',
          'delta' => 'news_related_content-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news_related_content'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'policies';
  $context->description = '';
  $context->tag = 'Policies';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'policy_document' => 'policy_document',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6f96eee322de439145b0cefdbf4677c0' => array(
          'module' => 'views',
          'delta' => '6f96eee322de439145b0cefdbf4677c0',
          'region' => '2_col_right',
          'weight' => '-67',
        ),
        'views-013f1a9499fd3e228acb440d35c4e05c' => array(
          'module' => 'views',
          'delta' => '013f1a9499fd3e228acb440d35c4e05c',
          'region' => '2_col_right',
          'weight' => '-66',
        ),
        'views-46346282751452a3808d6f57872e0ea2' => array(
          'module' => 'views',
          'delta' => '46346282751452a3808d6f57872e0ea2',
          'region' => '2_col_right',
          'weight' => '-65',
        ),
        'views-aa4871bab6565f42ab8165bb2ada835f' => array(
          'module' => 'views',
          'delta' => 'aa4871bab6565f42ab8165bb2ada835f',
          'region' => '2_col_right',
          'weight' => '-64',
        ),
        'views-basic_page_related_links-block' => array(
          'module' => 'views',
          'delta' => 'basic_page_related_links-block',
          'region' => '2_col_right',
          'weight' => '-63',
        ),
        'views-18dea8f2eaeb3995c52ca8db7620e44f' => array(
          'module' => 'views',
          'delta' => '18dea8f2eaeb3995c52ca8db7620e44f',
          'region' => '2_col_right',
          'weight' => '-62',
        ),
      ),
      'layout' => 'standard2col',
    ),
    'breadcrumb' => 'policythemes',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Policies');
  $export['policies'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'policy_landing';
  $context->description = '';
  $context->tag = 'Policies';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'policythemes*' => 'policythemes*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'apachesolr_search_blocks-policy_search' => array(
          'module' => 'apachesolr_search_blocks',
          'delta' => 'policy_search',
          'region' => '2_col_right',
          'weight' => '-51',
        ),
      ),
      'layout' => 'standard2col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Policies');
  $export['policy_landing'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_main';
  $context->description = '';
  $context->tag = 'Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search*' => 'search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu' => array(
          'module' => 'facetapi',
          'delta' => 'GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu',
          'region' => '3_col_left',
          'weight' => '-63',
        ),
        'facetapi-7oR1MA2IRPe8Qlx15Lno4wnSBlZPO1MW' => array(
          'module' => 'facetapi',
          'delta' => '7oR1MA2IRPe8Qlx15Lno4wnSBlZPO1MW',
          'region' => '3_col_left',
          'weight' => '-62',
        ),
        'facetapi-oMu1CUcixULh65EO1ng0vJg0WNJDgVqG' => array(
          'module' => 'facetapi',
          'delta' => 'oMu1CUcixULh65EO1ng0vJg0WNJDgVqG',
          'region' => '3_col_left',
          'weight' => '-61',
        ),
        'facetapi-BKAq2KbXNkqbYFbMQFjMmJCcBBM1T8ok' => array(
          'module' => 'facetapi',
          'delta' => 'BKAq2KbXNkqbYFbMQFjMmJCcBBM1T8ok',
          'region' => '3_col_left',
          'weight' => '-60',
        ),
        'facetapi-cEPd3aP0ZleHCH1wEM20i0PmY0A4r8d1' => array(
          'module' => 'facetapi',
          'delta' => 'cEPd3aP0ZleHCH1wEM20i0PmY0A4r8d1',
          'region' => '3_col_left',
          'weight' => '-59',
        ),
        'facetapi-dekSTWIuLsQbTtGNxS4gcEWIWWxquPjm' => array(
          'module' => 'facetapi',
          'delta' => 'dekSTWIuLsQbTtGNxS4gcEWIWWxquPjm',
          'region' => '3_col_left',
          'weight' => '-58',
        ),
        'facetapi-pQxgkzjggUQGr3GOl8WxOBMoFWeAV0px' => array(
          'module' => 'facetapi',
          'delta' => 'pQxgkzjggUQGr3GOl8WxOBMoFWeAV0px',
          'region' => '3_col_left',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search');
  $export['search_main'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_site';
  $context->description = '';
  $context->tag = 'Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/site*' => 'search/site*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => '3_col_right',
          'weight' => '-10',
        ),
        'apachesolr_stats-core_search' => array(
          'module' => 'apachesolr_stats',
          'delta' => 'core_search',
          'region' => '3_col_right',
          'weight' => '-9',
        ),
        'views-popular_nodes-block_2' => array(
          'module' => 'views',
          'delta' => 'popular_nodes-block_2',
          'region' => '3_col_right',
          'weight' => '-8',
        ),
        'views-popular_nodes-block_1' => array(
          'module' => 'views',
          'delta' => 'popular_nodes-block_1',
          'region' => '3_col_right',
          'weight' => '-7',
        ),
        'views-most_liked_content-block_1' => array(
          'module' => 'views',
          'delta' => 'most_liked_content-block_1',
          'region' => '3_col_right',
          'weight' => '-6',
        ),
        'views-most_liked_content-block' => array(
          'module' => 'views',
          'delta' => 'most_liked_content-block',
          'region' => '3_col_right',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search');
  $export['search_site'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'service-news-context';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        5106 => 5106,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'dir-news*' => 'dir-news*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-4f70f1b1bbd81bcd016af3ebca86d26a' => array(
          'module' => 'views',
          'delta' => '4f70f1b1bbd81bcd016af3ebca86d26a',
          'region' => '3_col_left',
          'weight' => '-10',
        ),
        'views-9a3b68b2582ce02cf7de9fca243360b3' => array(
          'module' => 'views',
          'delta' => '9a3b68b2582ce02cf7de9fca243360b3',
          'region' => '3_col_left',
          'weight' => '-9',
        ),
        'views-233879cccb66482879b49b3fbe14824a' => array(
          'module' => 'views',
          'delta' => '233879cccb66482879b49b3fbe14824a',
          'region' => '3_col_left',
          'weight' => '-8',
        ),
        'views-4fd35d136aad921efbf3261a92f40e2e' => array(
          'module' => 'views',
          'delta' => '4fd35d136aad921efbf3261a92f40e2e',
          'region' => '3_col_left',
          'weight' => '-7',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['service-news-context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 't_c_node';
  $context->description = '';
  $context->tag = 'Service Hub';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        't_c_service_notice' => 't_c_service_notice',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'node/3451',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Service Hub');
  $export['t_c_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'taxonomy';
  $context->description = 'Taxonomy context, e.g. /news';
  $context->tag = 'Taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'tags' => 'tags',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'fullwidth',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Taxonomy');
  t('Taxonomy context, e.g. /news');
  $export['taxonomy'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'technology_and_change';
  $context->description = '';
  $context->tag = 'Service Hub';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/technology-and-change' => 'content/technology-and-change',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-landing_page_icons-block' => array(
          'module' => 'views',
          'delta' => 'landing_page_icons-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-678d01bbcf4393bd08092472df6c0955' => array(
          'module' => 'views',
          'delta' => '678d01bbcf4393bd08092472df6c0955',
          'region' => '3_col_left',
          'weight' => '-10',
        ),
        'views-t_c_top_tasks-block' => array(
          'module' => 'views',
          'delta' => 't_c_top_tasks-block',
          'region' => '3_col_right',
          'weight' => '-9',
        ),
        'views-957f05141cded67b2b89e1f25d2bc70d' => array(
          'module' => 'views',
          'delta' => '957f05141cded67b2b89e1f25d2bc70d',
          'region' => '3_col_center',
          'weight' => '-10',
        ),
      ),
      'layout' => 'home3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Service Hub');
  $export['technology_and_change'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'top_tasks';
  $context->description = '';
  $context->tag = 'Top tasks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'my-top-tasks' => 'my-top-tasks',
        'top-tasks' => 'top-tasks',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'fullwidth',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Top tasks');
  $export['top_tasks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_edit';
  $context->description = '';
  $context->tag = 'Profile';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/*/edit' => 'user/*/edit',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => '3_col_right',
          'weight' => '-10',
        ),
      ),
      'layout' => 'standard3col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Profile');
  $export['user_edit'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_profile_current';
  $context->description = '';
  $context->tag = 'Profile';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'current',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'statuses-statuses' => array(
          'module' => 'statuses',
          'delta' => 'statuses',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-profile-spotlight-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-profile-spotlight-menu',
          'region' => '2_col_right',
          'weight' => '-52',
        ),
        'views-my_top_tasks-block' => array(
          'module' => 'views',
          'delta' => 'my_top_tasks-block',
          'region' => '2_col_right',
          'weight' => '-51',
        ),
        'views-alerts_history-block_1' => array(
          'module' => 'views',
          'delta' => 'alerts_history-block_1',
          'region' => '2_col_right',
          'weight' => '-50',
        ),
        'views-flagged_content-block' => array(
          'module' => 'views',
          'delta' => 'flagged_content-block',
          'region' => '2_col_right',
          'weight' => '-49',
        ),
        'views-following-block_1' => array(
          'module' => 'views',
          'delta' => 'following-block_1',
          'region' => '2_col_right',
          'weight' => '-48',
        ),
        'views-subscribed_content-block' => array(
          'module' => 'views',
          'delta' => 'subscribed_content-block',
          'region' => '2_col_right',
          'weight' => '-47',
        ),
        'views-forums_subscribed_to-block' => array(
          'module' => 'views',
          'delta' => 'forums_subscribed_to-block',
          'region' => '2_col_right',
          'weight' => '-46',
        ),
        'views-tags_subscribed_to-block' => array(
          'module' => 'views',
          'delta' => 'tags_subscribed_to-block',
          'region' => '2_col_right',
          'weight' => '-45',
        ),
      ),
      'layout' => 'standard2col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Profile');
  $export['user_profile_current'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_profile_other';
  $context->description = '';
  $context->tag = 'Profile';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'other',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'statuses-statuses' => array(
          'module' => 'statuses',
          'delta' => 'statuses',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-6770afa0d09f9cd3629bf8e4dcf0d451' => array(
          'module' => 'views',
          'delta' => '6770afa0d09f9cd3629bf8e4dcf0d451',
          'region' => '2_col_right',
          'weight' => '-54',
        ),
        'views-b3cc6400944ee4a8e0b036ef38bec26c' => array(
          'module' => 'views',
          'delta' => 'b3cc6400944ee4a8e0b036ef38bec26c',
          'region' => '2_col_right',
          'weight' => '-53',
        ),
        'views-subscribed_content-block_1' => array(
          'module' => 'views',
          'delta' => 'subscribed_content-block_1',
          'region' => '2_col_right',
          'weight' => '-52',
        ),
        'views-67848961ef8e8ded2e38d8b7f02ef6c0' => array(
          'module' => 'views',
          'delta' => '67848961ef8e8ded2e38d8b7f02ef6c0',
          'region' => '2_col_right',
          'weight' => '-51',
        ),
      ),
      'layout' => 'standard2col',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Profile');
  $export['user_profile_other'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'userbytag';
  $context->description = '';
  $context->tag = 'Taxonomy';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'users/users-by-tag/*' => 'users/users-by-tag/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'fullwidth',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Taxonomy');
  $export['userbytag'] = $context;

  return $export;
}
