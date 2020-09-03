<?php
/* Template Name: Testimonials */ 

get_header();
?>

<?php 
	// page main headings and desc
	get_template_part('template-parts/section_page_headers');
?>

<!-- review cards  -->
<section>
	<div class="container pb-big">
		<div class="d-grid three-col gap-5">
			<!-- card 1 -->
			<?php if(have_rows('testimonials__cards')): ?>
				<?php while(have_rows('testimonials__cards')): the_row(); ?>

					<div class="bg-color-white fg-align-center shadow rounded-normal p-4">
						<img src="<?php echo get_sub_field('avatar'); ?>" class="avatar" />
						<p class="fg-size-small fg-color-dull mv-2">
							<?php echo get_sub_field('review'); ?>
						</p>
						<p class="fg-bold fg-size-small fg-black"><?php echo get_sub_field('name'); ?></p>
						<img
							src="<?php echo get_sub_field('rating'); ?>"
							style="width: 6rem;"
							class="mt-1"
						/>
					</div>

				<?php endwhile; ?>
			<?php endif; ?>

		</div>
	</div>
</section>

<?php
	// video section 
	get_template_part('template-parts/section_video');
?>

<?php get_footer(); ?>