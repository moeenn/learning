<?php
/**
 * Template part for displaying accent color comprehensive_testing section
 *
 * @package intolerance
 */

?>


<!-- comprehensive testing -->
<section
  class="bg-color-primary fg-color-inverted"
  style="margin-top: -8rem;"
>
  <div class="container">
    <div class="attributes">
      <div class="fg-align-center">
        <h2>
          <?php the_field('comprehensive__heading_main', 'options'); ?>
        </h2>
        <h6>
          <?php the_field('comprehensive__heading_secondary', 'options'); ?>
        </h6>
      </div>

      <!-- section cards -->
      <div class="d-grid five-col mb-4">

        <?php if(have_rows('comprehensive__attributes', 'options')): ?>
          <?php while(have_rows('comprehensive__attributes', 'options')): the_row(); ?>

            <div class="fg-align-center pv-4 ph-3">
              <img src="<?php echo get_sub_field('attribute_image'); ?>" style="width: 3.4rem;" />
              <h6 class="fg-bold mt-2 mb-0"><?php echo get_sub_field('heading'); ?></h6>
              <p><?php echo get_sub_field('desc'); ?></p>
            </div>

          <?php endwhile; ?>
        <?php endif;?>
        <!-- card 1 -->
      </div>
    </div>
  </div>
</section>
