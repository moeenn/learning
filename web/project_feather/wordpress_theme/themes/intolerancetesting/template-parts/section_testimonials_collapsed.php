<?php
/**
 * Template part for displaying testimonials section (collapsed)
 *
 * @package intolerance
 */

?>


<!-- testimonials section -->
<section class="bg-color-white">
  <div class="container pv-big">
    <div class="fg-align-center">
      <h2 class="fg-color-primary"><?php the_field('testimonials__heading_main', 'options'); ?></h2>
      <p><?php the_field('testimonials__desc', 'options'); ?></p>
    </div>

    <div class="d-grid three-col mt-2">

      <?php 
      // get first three reviews
      
      $rows = get_field('testimonials__cards', 'options');
      $row_count = count($rows);
      $max_rows = 3;
      $selected_rows = [];

      for($i = 0; $i < $max_rows; $i++) {
        array_push($selected_rows, $rows[$i]);
      }
      
      ?>

      <?php foreach($selected_rows as $row): ?>

        <div class="fg-align-center p-4">
        <img src="<?php echo $row['avatar']; ?>" class="avatar" />
        <p class="fg-size-small fg-color-dull mt-3 mb-2">
          <?php echo $row['review'];; ?>
        </p>
        <p class="fg-size-small fg-bold uppercase"><?php echo $row['name']; ?></p>
        <img
          src="<?php echo $row['rating']; ?>"
          style="width: 6rem;"
          class="mt-1"
        />
      </div>

      <?php endforeach; ?>
    </div>

    <div class="fg-align-center">
      <button class="uppercase">
        <?php $button_link = get_field('testimonials__call_to_action', 'options'); ?>
        <a href="<?php echo $button_link['url']; ?>"><?php echo $button_link['title']; ?></a>
      </button>
    </div>
  </div>
</section>