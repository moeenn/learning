<?php
/**
 * The header for our theme
 *
 * This is the template that displays all of the <head> section and everything up until <div id="content">
 *
 * @link https://developer.wordpress.org/themes/basics/template-files/#template-partials
 *
 * @package intolerance
 */

?>

<!DOCTYPE html>
<html <?php language_attributes(); ?>>
  <head>
    <meta charset="<?php bloginfo( 'charset' ); ?>" />
    <meta
      name="viewport"
      content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=0"
    />
		<?php wp_head(); ?>
  </head>
	<body  <?php body_class(); ?>> 
	<?php wp_body_open(); ?>
    <!-- offer code banner -->
    <section>
      <div class="bg-color-primary fg-color-inverted fg-align-center p-1">
        <p class="uppercase fg-size-small fg-bold mh-3">
          <?php the_field('offer__description'); ?>
        </p>
      </div>
    </section>

    <!-- navbar -->
    <section class="bg-color-white">
      <div class="container">
        <div class="navbar d-flex">
          <div class="navbar__fixed">
            <!-- main site logo -->
            <div class="navbar__fixed__logo">
              <img src="<?php intolerancetesting_get_custom_logo_url(); ?>">
              
              <a href="<?php echo esc_url(home_url('/')); ?>">
                <span class="fg-color-primary">
                  <?php echo get_bloginfo("name"); ?>
                </span>
              </a>
            </div>

            <!-- navbar links expand button -->
            <a href="#" class="navbar__fixed__links_expand"
              ><img src="<?php echo get_template_directory_uri() . "/assets/images/navbar_button.png" ?>" alt=""
            /></a>
          </div>

          <!-- navbar links section -->
          <div class="navbar__links">
            <?php intolerancetesting_clean_custom_menus('primary'); ?>
          </div>

          <!-- shop basket icon -->
          <a href="#" class="navbar__shopbasket">
            <img src="<?php echo get_template_directory_uri() . '/assets/images/shopping_basket.png'?>" class="align-center ml-2" />
          </a>
        </div>
      </div>
    </section>
