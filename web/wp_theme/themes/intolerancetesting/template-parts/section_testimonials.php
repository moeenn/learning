<?php
/**
 * Template part for displaying testimonials section
 *
 * @package intolerance
 */

?>


<!-- testimonials section -->
<section class="bg-color-white">
  <div class="container pv-big">
    <div class="fg-align-center">
      <h2 class="fg-color-primary"><?php the_field('testimonials__heading_main'); ?></h2>
      <p><?php the_field('testimonials__desc'); ?></p>
    </div>

    <div class="d-grid three-col mt-2">

      <?php if( have_rows('testimonials__cards') ): ?>
        <?php while( have_rows('testimonials__cards') ): the_row(); ?>

          <div class="fg-align-center p-4">
          <img src="<?php echo get_sub_field('avatar'); ?>" class="avatar" />
          <p class="fg-size-small fg-color-dull mt-3 mb-2">
            <?php echo get_sub_field('review'); ?>
          </p>
          <p class="fg-size-small fg-bold uppercase"><?php echo get_sub_field('name'); ?></p>
          <img
            src="<?php echo get_sub_field('rating'); ?>"
            style="width: 6rem;"
            class="mt-1"
          />
        </div>

        <?php endwhile ?>
      <?php endif; ?>
    </div>

    <div class="fg-align-center">
      <button class="uppercase">
        <?php $button_link = get_field('testimonials__call_to_action'); ?>
        <a href="<?php echo $button_link['url']; ?>"><?php echo $button_link['title']; ?></a>
      </button>
    </div>
  </div>
</section>