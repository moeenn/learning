<?php
/* Template Name: Symptoms */ 

get_header();
?>

<?php 
	// page main headings and desc
	get_template_part('template-parts/section_page_headers');
?>

<!-- symptom cards  -->
<section>
	<div class="container pb-big">
		<div class="d-grid four-col-custom gap-5">

			<?php if(have_rows('symptom__cards', 'options')): ?>
				<?php while(have_rows('symptom__cards', 'options')): the_row(); ?>

					<div class="bg-color-white fg-align-center shadow rounded-normal">
						<img
							src="<?php echo get_sub_field('img'); ?>"
							style="width: 100%;"
							class="rounded-normal"
						/>
						<div class="p-3">
							<p class="fg-color-black fg-bold"><?php echo get_sub_field('heading'); ?></p>
							<p class="fg-size-small fg-color-dull mv-2">
								<?php echo get_sub_field('desc'); ?>
							</p>
						</div>
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