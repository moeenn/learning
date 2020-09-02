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
      <div class="payment_plans__card flex-1 fg-align-center">
        <div class="d-flex flex-v p-4">
          <div>
            <img src="<?php the_field('payment_plans__icon_one'); ?>" />
            <h4 class="fg-bold mt-2 mb-0"><?php the_field('payment_plans__plan_one_heading'); ?></h4>
            <h6 class="mb-0"><?php the_field('payment_plans__plan_one_description_main'); ?></h6>
            <p class="fg-color-primary mb-2">
              <?php the_field('payment_plans__plan_one_description_secondary'); ?>
            </p>
          </div>
          <p class="fg-color-dull fg-size-small">
            <?php the_field('payment_plans__plan_one_description_full'); ?>
          </p>

          <div class="mt-auto pt-2">
            <h5 class="fg-color-primary mb-0"><?php the_field('payment_plans__plan_one_price'); ?></h5>
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

      <!-- card 2 -->
      <div class="payment_plans__card flex-1 fg-align-center">
        <div class="d-flex flex-v p-4">
          <div>
            <img src="<?php the_field('payment_plans__icon_two'); ?>" />
            <h4 class="fg-bold mt-2 mb-0"><?php the_field('payment_plans__plan_two_heading'); ?></h4>
            <h6 class="mb-0"><?php the_field('payment_plans__plan_two_description_main'); ?></h6>
            <p class="fg-color-primary mb-2">
              <?php the_field('payment_plans__plan_two_description_secondary'); ?>
            </p>
          </div>

          <p class="fg-color-dull fg-size-small">
            <?php the_field('payment_plans__plan_two_description_full'); ?>          
          </p>

          <div class="mt-auto pt-2">
            <h5 class="fg-color-primary mb-0"><?php the_field('payment_plans__plan_two_price'); ?></h5>
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

      <!-- card 3 -->
      <div class="payment_plans__card flex-1 fg-align-center">
        <div class="d-flex flex-v p-4">
          <div>
            <img src="<?php the_field('payment_plans__icon_three'); ?>" />
            <h4 class="fg-bold mt-2 mb-0"><?php the_field('payment_plans__plan_three_heading'); ?></h4>
            <h6 class="mb-0"><?php the_field('payment_plans__plan_three_description_main'); ?></h6>
            <p class="fg-color-primary mb-2">
              <?php the_field('payment_plans__plan_three_description_secondary'); ?>
            </p>
          </div>

          <p class="fg-color-dull fg-size-small">
            <?php the_field('payment_plans__plan_three_description_full'); ?>
          </p>

          <div class="mt-auto pt-2">
            <h5 class="fg-color-primary mb-0"><?php the_field('payment_plans__plan_three_price'); ?></h5>
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

      <!-- card 4 -->
      <div class="payment_plans__card flex-1 fg-align-center">
        <div class="d-flex flex-v p-4">
          <div>
            <img src="<?php the_field('payment_plans__icon_four'); ?>" />
            <h4 class="fg-bold mt-2 mb-0"><?php the_field('payment_plans__plan_four_heading'); ?></h4>
            <h6 class="mb-0"><?php the_field('payment_plans__plan_four_description_main'); ?></h6>
            <p class="fg-color-primary mb-2">
              <?php the_field('payment_plans__plan_four_description_secondary'); ?>
            </p>
          </div>

          <p class="fg-color-dull fg-size-small">
            <?php the_field('payment_plans__plan_four_description_full'); ?>
          </p>

          <div class="mt-auto pt-2">
            <h5 class="fg-color-primary mb-0"><?php the_field('payment_plans__plan_four_price'); ?></h5>
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
    </div>
  </div>
</section>