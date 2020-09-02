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
          <?php the_field('comprehensive__heading_main'); ?>
        </h2>
        <h6>
          <?php the_field('comprehensive__heading_secondary'); ?>
        </h6>
      </div>

      <!-- section cards -->
      <div class="d-grid five-col mb-4">
        <!-- card 1 -->
        <div class="fg-align-center pv-4 ph-3">
          <img src="<?php the_field('comprehensive__attribute_one_icon'); ?>" style="width: 3.4rem;" />
          <h6 class="fg-bold mt-2 mb-0"><?php the_field('comprehensive__attribute_one_heading'); ?></h6>
          <p><?php the_field('comprehensive__attribute_one_desc'); ?></p>
        </div>

        <!-- card 2 -->
        <div class="fg-align-center pv-4 ph-3">
          <img src="<?php the_field('comprehensive__attribute_two_icon'); ?>" style="width: 3.4rem;" />
          <h6 class="fg-bold mt-2 mb-0"><?php the_field('comprehensive__attribute_two_heading'); ?></h6>
          <p><?php the_field('comprehensive__attribute_two_desc'); ?></p>
        </div>

        <!-- card 3 -->
        <div class="fg-align-center pv-4 ph-3">
          <img src="<?php the_field('comprehensive__attribute_three_icon'); ?>" style="width: 3.4rem;" />
          <h6 class="fg-bold mt-2 mb-0"><?php the_field('comprehensive__attribute_three_heading'); ?></h6>
          <p><?php the_field('comprehensive__attribute_three_desc'); ?></p>
        </div>

        <!-- card 4 -->
        <div class="fg-align-center pv-4 ph-3">
          <img src="<?php the_field('comprehensive__attribute_four_icon'); ?>" style="width: 3.4rem;" />
          <h6 class="fg-bold mt-2 mb-0"><?php the_field('comprehensive__attribute_four_heading'); ?></h6>
          <p><?php the_field('comprehensive__attribute_four_desc'); ?></p>
        </div>

        <!-- card 5 -->
        <div class="fg-align-center pv-4 ph-3">
          <img src="<?php the_field('comprehensive__attribute_five_icon'); ?>" style="width: 3.4rem;" />
          <h6 class="fg-bold mt-2 mb-0"><?php the_field('comprehensive__attribute_five_heading'); ?></h6>
          <p><?php the_field('comprehensive__attribute_five_desc'); ?></p>
        </div>
      </div>
    </div>
  </div>
</section>
