<?php
/**
 * Template part for displaying watch_video section
 *
 *
 * @package intolerance
 */

?>

<!-- video section -->
<section class="bg-color-white">
  <div class="container pv-big">
    <div class="tests_video d-flex flex-h">
      <div class="flex-1">
        <img
          src="<?php the_field('video__thumbnail', 'options'); ?>"
          class="rounded-normal"
          style="max-width: 90%;"
        />
      </div>
      <div class="flex-1">
        <h2 class="fg-color-primary">
          <?php the_field('video__heading_main', 'options'); ?>
        </h2>
        <p class="fg-size-small fg-color-black">
          <?php the_field('video__heading_secondary', 'options'); ?>
        </p>
        <p class="fg-color-dull mt-1 fg-size-small">
          <?php the_field('video__description', 'options'); ?>
        </p>
        <button class="button-primary shadow-accent mt-2">
          <?php $button_link = get_field('video__call_to_action', 'options'); ?>
          <a href="<?php echo $button_link['url']; ?>"><?php echo $button_link['title']; ?></a>
        </button>
      </div>
    </div>
  </div>
</section>