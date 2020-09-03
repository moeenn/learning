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


<!-- appropriate expectations -->
<section class="bg-color-white">
	<div class="container pt-3 pb-big">
		<div class="d-grid two-col">
			<!-- first column -->
			<div class="pt-5">
				<h4 class="fg-color-primary"><?php the_field('operations__checklist__col_one__heading'); ?></h4>

				<div>
					<!-- item 1 -->
					<?php if( have_rows('operations__checklist__column_one__list')): ?>
						<?php while( have_rows('operations__checklist__column_one__list')): the_row(); ?>

							<div class="d-flex flex-h pr-5 mv-3">
								<img
									src="<?php echo get_sub_field('img'); ?>"
									style="height: 2.5rem;"
									class="mv-auto"
								/>
								<div class="ml-2">
									<p class="fg-color-black fg-bold">
										<?php echo get_sub_field('list_heading'); ?>
									</p>
									<p class="fg-size-small fg-color-dull">
										<?php echo get_sub_field('list_desc'); ?>
									</p>
								</div>
							</div>

						<?php endwhile; ?>
					<?php endif; ?>	

				</div>
			</div>

			<!-- second column -->
			<div class="pt-5">
				<div>
					<h4 class="fg-color-primary"><?php the_field('operations__checklist__col_two__heading'); ?></h4>
					<p class="fg-color-black fg-bold mv-2">
						<?php the_field('operations__checklist__column_two__subheading'); ?>
					</p>
					<div class="fg-size-small fg-color-dull">
						<ul class="pv-1">
							<?php if(have_rows('operations__checklist__column_two__list')): ?>
								<?php while(have_rows('operations__checklist__column_two__list')): the_row(); ?>

									<li><?php echo get_sub_field('list_item'); ?></li>

								<?php endwhile; ?>
							<?php endif; ?>

						</ul>

						<p class="fg-size-small">
							<?php the_field('operations__checklist__column_two__desc'); ?>
						</p>
					</div>

					<?php $button_link = get_field('operations__checklist__column_two__call_to_action'); ?>
					<button class="button-primary shadow-accent mt-3">
						<a href="<?php echo $button_link['url']; ?>"><?php echo $button_link['title']; ?></a>
					</button>
				</div>
			</div>
		</div>
	</div>
</section>


<section>
	<div class="container pt-3 pb-big">
		<div class="d-grid two-col">
			<!-- first column -->
			<div class="pt-5">
				<h4 class="fg-color-primary">
					<?php the_field('operations__details__column_one__heading'); ?>
				</h4>
				<p class="fg-size-small fg-color-dull pb-2 pr-big">
					<?php the_field('operations__details__column_one__desc'); ?>					
				</p>
			</div>

			<!-- second column -->
			<div class="pt-5">
				<div>
					<h6 class="fg-color-primary">
						<?php the_field('operations__details__column_two__heading'); ?>
					</h6>
					<p class="fg-size-small fg-color-dull mb-2">
						<?php the_field('operations__details__column_two__desc'); ?>
					</p>

					<div class="fg-size-small fg-color-dull">
						<ul class="pv-1">
							<?php if(have_rows('operations__details__column_two__list')): ?>
								<?php while(have_rows('operations__details__column_two__list')): the_row(); ?>
				
									<li><?php echo get_sub_field('list_item'); ?></li>

								<?php endwhile; ?>
							<?php endif; ?>
			
						</ul>
					</div>
				</div>
			</div>
		</div>
	</div>
</section>


<?php
	// video section 
	get_template_part('template-parts/section_video');
?>

<?php get_footer(); ?>