<?php
/* Template Name: Comparison */ 

get_header();
?>

<?php 
	// page main headings and desc
	get_template_part('template-parts/section_page_headers');
?>

<!-- video section -->
<section class="alergy_v_intolerance__video">
	<div class="container">
		<div class="p-big bg-color-white shadow">
			<div class="tests_video d-flex flex-h">
				<div class="flex-1">
					<img
						src="<?php the_field('comparison__video_card__thumbnail'); ?>"
						class="rounded-normal"
						style="max-width: 90%;"
					/>
				</div>
				<div class="flex-1 mv-auto">
					<h6 class="fg-color-black fg-bold">
						<?php the_field('comparison__video_card__heading'); ?>
					</h6>
					<p class="fg-color-dull mt-2 fg-size-small">
						<?php the_field('comparison__video_card__desc'); ?>
					</p>
				</div>
			</div>
		</div>	
	</div>
</section>


<!-- bubble cards -->
<section style="background-color: #333333;">
	<div class="container pv-big">
		<div class="bubble_cards d-grid four-col">

			<?php if(have_rows('comparison__cards')): ?>
				<?php while(have_rows('comparison__cards')): the_row(); ?>

					<div
					class="fg-align-center bg-color-white shadow rounded-normal p-4 mt-3"
					>
						<div
							class="bubble_cards__bubble_large bg-color-primary fg-color-inverted fg-bold d-flex rounded-corners"
						>
							<span><?php echo get_sub_field('bubble_text'); ?></span>
						</div>

						<div class="bubble_cards__content d-flex flex-v">
							<h6 class="fg-bold"><?php echo get_sub_field('heading'); ?></h6>
							<p class="fg-size-small fg-color-dull mb-1">
								<?php echo get_sub_field('desc'); ?>
							</p>

							<div class="mt-auto">
								<?php $button_link = get_sub_field('link'); ?>
								<button><a href="<?php echo $button_link['url']; ?>"><?php echo $button_link['title']; ?></a></button>
							</div>
						</div>
					</div>

				<? endwhile; ?>
			<? endif; ?>

		</div>
	</div>
</section>

<?php
	// video section 
	get_template_part('template-parts/section_video');
?>

<?php get_footer(); ?>