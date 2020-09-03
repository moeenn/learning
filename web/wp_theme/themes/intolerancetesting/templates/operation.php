<?php
/* Template Name: Operations */ 

get_header();
?>

<?php 
	// page main headings and desc
	get_template_part('template-parts/section_page_headers');
?>

<!-- operations cards -->
<section>
	<div class="container">
		<!-- cards -->
		<div class="hair_testing__cards d-grid three-col pb-5">
			<!-- card 1 -->
			<?php if(have_rows('operations__cards')): ?>
				<?php while(have_rows('operations__cards')): the_row(); ?>

					<div class="fg-align-center shadow p-5 bg-color-white">
						<img src="<?php echo get_sub_field('img'); ?>" style="width: 3.4rem;" />
						<h5 class="mt-2"><?php echo get_sub_field('heading'); ?></h5>
						<p class="fg-size-small">
							<?php echo get_sub_field('desc'); ?>
						</p>

						<?php $button_link = get_sub_field('call_to_action'); ?>
						<?php if ($button_link): ?>
							<div class="fg-align-center mt-2">
								<button class="button-primary shadow-accent">
									<a href="<?php echo $button_link['url']; ?>"><?php echo $button_link['title']; ?></a>
								</button>
							</div>
						<?php endif; ?>
					</div>

				<?php endwhile; ?>
			<?php endif; ?>
		</div>	
	</div>
</section>


<?php
	// accent colored comprehensive testing sections
	get_template_part('template-parts/section_comprehensive');
?>





<?php
	// video section 
	get_template_part('template-parts/section_video');
?>

<?php get_footer(); ?>