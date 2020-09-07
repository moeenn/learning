<?php
/* Template Name: Home Page */ 

get_header();
?>

		<!-- hero section -->
		<section class="pv-5" style="position: relative;">
			<div class="container">
				<div class="hero">
					<!-- user rating -->
					<div class="user_rating">
						<img src="<?php the_field('hero__rating_img'); ?>" class="mv-auto" />
						<span class="uppercase fg-size-small fg-color-black">
							<?php the_field('hero__rated_by'); ?>
						</span>
					</div>

					<!-- hero heading -->
					<div>
						<h1 class="fg-color-primary mv-1 fg-bold mb-0">
							<?php the_field('hero__heading'); ?>
						</h1>
					</div>

					<!-- hero text -->
					<div>
						<p class="fg-color-black">
							<?php the_field('hero__sub_heading'); ?>
						</p>
						<p class="fg-color-dull mv-2">
							<?php the_field('hero__description'); ?>
						</p>

						<!-- call to action buttons -->
						<?php
						
						$primary_link = get_field('hero__primary_button');
						$secondary_link = get_field('hero__secondary_button');
						
						?>
						<div class="mv-1">
							<button class="button-primary shadow-accent mr-3 mv-1">
								<a href="<?php echo $primary_link['url']; ?>"><?php echo $primary_link['title']; ?></a>
							</button>
							<button class="button-secondary mv-1">
								<div class="d-flex">
									<img
										src="<?php the_field('hero__secondary_button_play_image'); ?>"
										style="height: 2rem;"
										class="mr-1"
									/>
									<span class="fg-color-primary mv-auto"><a href="<?php echo $secondary_link['url']; ?>"><?php echo $secondary_link['title']; ?></a></span>
								</div>
							</button>
						</div>

						<!-- pinned user endorsement -->
						<?php 
						// get random user endorsement
						$rows = get_field('testimonials__cards', 'options');
						$row_count = count($rows);
						$i = rand(0, $row_count - 1);
						?>
						<div class="hero__endorsement d-flex mt-5">
							<div>
								<img src="<?php echo $rows[$i]['avatar']; ?>" class="avatar mr-2" />
							</div>
							<div class="hero__endorsement_text">
								<p class="fg-size-small fg-color-dull">
									<?php echo $rows[$i]['review']; ?>
								</p>
								<p class="uppercase fg-bold mt-1 fg-size-small fg-color-dull">
									<?php echo $rows[$i]['name']; ?>
								</p>
							</div>
						</div>
					</div>
				</div>
			</div>

			<div class="hero__background">
				<img src="<?php the_field('hero__background'); ?>" />
			</div>
		</section>

		<?php
			// payment plan cards
			get_template_part('template-parts/section_productplans');
			// comprehensive testing
			get_template_part('template-parts/section_comprehensive');
			// video section 
			get_template_part('template-parts/section_video');
		?>

		<!-- steps cards -->
		<section style="background-color: #f6f6f6;">
			<div class="container pv-big">
				<div class="fg-align-center">
					<h2 class="fg-color-primary">
						<?php the_field('steps__heading'); ?>
					</h2>
					<p>
						<?php the_field('steps__desc'); ?>
					</p>
				</div>

				<div class="bubble_cards d-grid four-col mt-5">
					<!-- card 1 -->
					<?php if(have_rows('steps__steps_cards')): ?>
	          <?php while(have_rows('steps__steps_cards')): the_row(); ?>

							<div
							class="fg-align-center bg-color-white shadow rounded-normal p-4 mt-3"
							>
								<div
									class="bubble_cards__bubble bg-color-primary fg-color-inverted fg-bold d-flex rounded-corners"
								>
									<span><?php echo get_sub_field('counter'); ?></span>
								</div>
								<h6 class="fg-bold"><?php echo get_sub_field('heading'); ?></h6>
								<p class="fg-size-small fg-color-dull">
									<?php echo get_sub_field('desc'); ?>
								</p>
							</div>

						<?php endwhile; ?>
	        <?php endif;?>

				</div>
			</div>
		</section>

		<!-- dark page section -->
		<section style="background-color: #343434;">
			<div class="container pv-big">
				<div class="fg-align-center fg-color-inverted">
					<h2><?php the_field('dark_section__heading_main'); ?></h2>
					<p>
						<?php the_field('dark_section__desc_main'); ?>
					</p>
				</div>

				<div class="d-grid three-col fg-color-inverted mt-3">
					<!-- card 1 -->
					<?php if(have_rows('dark_section__cards')): ?>
	          <?php while(have_rows('dark_section__cards')): the_row(); ?>

							<div class="fg-align-center p-4">
								<img src="<?php echo get_sub_field('img'); ?>" style="width: 3.4rem;" />
								<h5 class="mt-2"><?php echo get_sub_field('heading'); ?></h5>
								<p class="fg-size-small">
									<?php echo get_sub_field('desc'); ?>
								</p>
							</div>

						<?php endwhile; ?>
	        <?php endif;?>
				</div>

				<!-- call to action button -->
				<div class="fg-align-center">
					<button class="button-primary">
					<?php $button_link = get_field('dark_section__call_to_action'); ?>
						<a href="<?php echo $button_link['url']; ?>"><?php echo $button_link['title']; ?></a>
					</button>
				</div>
			</div>
		</section>

		<!-- slider section -->
		<?php 
			// page main headings and desc
			get_template_part('template-parts/section_page_headers');
		?>

		<section style="margin-top: -3rem;">
      <div class="container pb-big">
        <div class="slider_container">

					<?php if(have_rows('symptom__cards', 'options')): ?>
						<?php while(have_rows('symptom__cards', 'options')): the_row(); ?>

							<div class="bg-color-white fg-align-center shadow rounded-normal m-3">
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

		<!-- testimonials section -->
		<?php 
			get_template_part('template-parts/section_testimonials_collapsed');
		?>

		<!-- frequently asked questions -->
		<section style="background-color: #f6f6f6;">
			<div class="container pv-big">
				<div class="fg-align-center">
					<h2 class="fg-color-primary">
						<?php the_field('faq__heading_main', 'options'); ?>
					</h2>
					<p class="fg-color-black">
						<?php the_field('faq__desc', 'options'); ?>
					</p>
				</div>

				<div
					class="faq bg-color-white shadow pv-big ph-huge mt-big rounded-normal mh-auto"
				>
					<!-- faq questions -->
					<?php if( have_rows('faq__questions', 'options') ):?>
						<?php while (have_rows('faq__questions', 'options') ): the_row(); ?>
							<div class="__faq_entry" style="cursor: pointer;">
								<span class="fg-bold fg-color-primary mr-3">+</span>
								<span class="fg-color-black"
									><?php echo get_sub_field('question'); ?></span
								>
								<p class="fg-size-small fg-color-dull mv-2 d-none">
									<?php echo get_sub_field('answer'); ?>
								</p>
							</div>
							<hr />
						<?php endwhile;?>
					<?php endif; ?>
				</div>
			</div>
		</section>

		<!-- guarantee -->
		<section class="bg-color-primary fg-color-inverted">
			<div class="container pv-5">
				<div style="max-width: 80%;" class="mh-auto">
					<div class="guarantee d-flex flex-h">
						<div class="flex-1">
							<img src="<?php the_field('guarantee__stamp'); ?>" />
						</div>
						<div class="mv-auto">
							<h3>	
								<?php the_field('guarantee__heading'); ?>
							</h3>
							<p class="mv-2">
								<?php the_field('guarantee__desc'); ?>
							</p>
							<span class="fg-size-small"><?php the_field('guarantee__disclaimer'); ?></span>
						</div>
					</div>
				</div>
			</div>
		</section>

		<section class="bg-color-white">
			<div class="container fg-align-center pv-big">
				<!-- user rating -->
				<div class="user_rating fg-align-center">
					<img src="<?php the_field('discover__rating_img'); ?>" class="mv-auto" />
					<span class="uppercase fg-size-small fg-color-black ml-2">
						<?php the_field('discover__rated_by'); ?>
					</span>
				</div>

				<div>
					<h1 class="fg-color-primary fg-bold ph-big mv-2">
						<?php the_field('discover__heading_main'); ?>
					</h1>
					<h6 class="fg-color-black">
						<?php the_field('discover__heading_secondary'); ?>
					</h6>
				</div>

				<div>
					<button class="button-primary shadow-accent uppercase mt-2">
						<?php $button_link = get_field('discover__call_to_action'); ?>
						<a href="<?php echo $button_link['url']; ?>"><?php echo $button_link['title']; ?></a>
					</button>
				</div>
			</div>
		</section>


<?php get_footer(); ?>