<?php
/**
 * Template part for displaying product_plans section
 *
 *
 * @package intolerance
 */

?>

<!-- payment plan cards -->
<section class="pb-5">
  <div class="container">
    <div class="payment_plans bg-color-white shadow rounded-normal">
      <!-- card 1 -->
      <?php if( have_rows('payment_plans__plan_cards') ):?>
        <?php while(have_rows('payment_plans__plan_cards')): the_row();?>

          <div class="payment_plans__card flex-1 fg-align-center">
            <div class="d-flex flex-v p-4">
              <div>
                <img src="<?php echo get_sub_field('plan_img'); ?>" />
                <h4 class="fg-bold mt-2 mb-0"><?php echo get_sub_field('heading_main'); ?></h4>
                <h6 class="mb-0"><?php echo get_sub_field('subheading_one'); ?></h6>
                <p class="fg-color-primary mb-2">
                  <?php echo get_sub_field('subheading_two'); ?>
                </p>
              </div>
              <p class="fg-color-dull fg-size-small">
                <?php echo get_sub_field('plan_body'); ?>
              </p>

              <div class="mt-auto pt-2">
                <h5 class="fg-color-primary mb-0"><?php echo get_sub_field('price'); ?></h5>
                <button class="button-primary mv-1">Add to Cart</button>
                <p
                  class="fg-size-small fg-color-dull mt-1"
                  style="text-decoration: underline;"
                >
                  Full Item List available for download.
                </p>
              </div>
            </div>
          </div>
        <?php endwhile;?>
      <?php endif; ?>
    </div>
  </div>
</section>