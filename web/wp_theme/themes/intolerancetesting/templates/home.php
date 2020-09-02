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
										src="<?php echo get_template_directory_uri() . '/assets/images/play_button_filled.png'?>"
										style="height: 2rem;"
										class="mr-1"
									/>
									<span class="fg-color-primary mv-auto"><a href="<?php echo $secondary_link['url']; ?>"><?php echo $secondary_link['title']; ?></a></span>
								</div>
							</button>
						</div>

						<!-- user endorsement -->
						<div class="hero__endorsement d-flex mt-5">
							<div>
								<img src="<?php echo get_template_directory_uri() . '/assets/images/avatar.png'?>" class="avatar mr-2" />
							</div>
							<div class="hero__endorsement_text">
								<p class="fg-size-small fg-color-dull">
									Lorem ipsum dolor, sit amet consectetur adipisicing elit. At
									libero expedita sit optio facere repudiandae iusto
									necessitatibus voluptatum. Dolorum eligendi repudiandae
									assumenda ea ducimus a cupiditate magnam culpa sunt amet?
								</p>
								<p class="uppercase fg-bold mt-1 fg-size-small fg-color-dull">
									Matthew Robles
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
					<div
						class="fg-align-center bg-color-white shadow rounded-normal p-4 mt-3"
					>
						<div
							class="bubble_cards__bubble bg-color-primary fg-color-inverted fg-bold d-flex rounded-corners"
						>
							<span><?php the_field('steps__card_one_count'); ?></span>
						</div>
						<h6 class="fg-bold"><?php the_field('steps__card_one_heading'); ?></h6>
						<p class="fg-size-small fg-color-dull">
							<?php the_field('steps__card_one_desc'); ?>
						</p>
					</div>

					<!-- card 2 -->
					<div
						class="fg-align-center bg-color-white shadow rounded-normal p-4 mt-3"
					>
						<div
							class="bubble_cards__bubble bg-color-primary fg-color-inverted fg-bold d-flex rounded-corners"
						>
							<span><?php the_field('steps__card_two_count'); ?></span>
						</div>
						<h6 class="fg-bold"><?php the_field('steps__card_two_heading'); ?></h6>
						<p class="fg-size-small fg-color-dull">
							<?php the_field('steps__card_two_desc'); ?>
						</p>
					</div>

					<!-- card 3 -->
					<div
						class="fg-align-center bg-color-white shadow rounded-normal p-4 mt-3"
					>
						<div
							class="bubble_cards__bubble bg-color-primary fg-color-inverted fg-bold d-flex rounded-corners"
						>
							<span><?php the_field('steps__card_three_count'); ?></span>
						</div>
						<h6 class="fg-bold"><?php the_field('steps__card_three_heading'); ?></h6>
						<p class="fg-size-small fg-color-dull">
							<?php the_field('steps__card_three_desc'); ?>
						</p>
					</div>

					<!-- card 4 -->
					<div
						class="fg-align-center bg-color-white shadow rounded-normal p-4 mt-3"
					>
						<div
							class="bubble_cards__bubble bg-color-primary fg-color-inverted fg-bold d-flex rounded-corners"
						>
							<span><?php the_field('steps__card_four_count'); ?></span>
						</div>
						<h6 class="fg-bold"><?php the_field('steps__card_four_heading'); ?></h6>
						<p class="fg-size-small fg-color-dull">
							<?php the_field('steps__card_four_desc'); ?>
						</p>
					</div>
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
					<div class="fg-align-center p-4">
						<img src="<?php the_field('dark_section__card_one_icon'); ?>" style="width: 3.4rem;" />
						<h5 class="mt-2"><?php the_field('dark_section__card_one_heading'); ?></h5>
						<p class="fg-size-small">
							<?php the_field('dark_section__card_one_desc'); ?>
						</p>
					</div>

					<!-- card 2 -->
					<div class="fg-align-center p-4">
						<img src="<?php the_field('dark_section__card_two_icon'); ?>" style="width: 3.4rem;" />
						<h5 class="mt-2"><?php the_field('dark_section__card_two_heading'); ?></h5>
						<p class="fg-size-small">
							<?php the_field('dark_section__card_two_desc'); ?>
						</p>
					</div>

					<!-- card 3 -->
					<div class="fg-align-center p-4">
						<img src="<?php the_field('dark_section__card_three_icon'); ?>" style="width: 3.4rem;" />
						<h5 class="mt-2"><?php the_field('dark_section__card_three_heading'); ?></h5>
						<p class="fg-size-small">
							<?php the_field('dark_section__card_three_desc'); ?>
						</p>
					</div>
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

		<!-- testimonials section -->
		<?php 
			get_template_part('template-parts/section_testimonials');
		?>

		<!-- frequently asked questions -->
		<section style="background-color: #f6f6f6;">
			<div class="container pv-big">
				<div class="fg-align-center">
					<h2 class="fg-color-primary">
						<?php the_field('faq__heading_main'); ?>
					</h2>
					<p class="fg-color-black">
						<?php the_field('faq__desc'); ?>
					</p>
				</div>

				<div
					class="faq bg-color-white shadow pv-big ph-huge mt-big rounded-normal mh-auto"
				>
					<!-- question 1 -->
					<div class="__faq_entry" style="cursor: pointer;">
						<span class="fg-bold fg-color-primary mr-3">+</span>
						<span class="fg-color-black"
							>Lorem ipsum dolor sit amet, consectetur adipisicing elit?</span
						>
						<p class="fg-size-small fg-color-dull mv-2 d-none">
							Lorem ipsum dolor sit, amet consectetur adipisicing elit. Nobis
							cupiditate ipsam, voluptatibus maxime molestiae architecto nam
							itaque similique impedit dolore possimus aliquam eveniet modi
							asperiores voluptas deserunt sapiente hic quibusdam!
						</p>
					</div>

					<hr />

					<!-- quesiton 2 -->
					<div class="__faq_entry" style="cursor: pointer;">
						<span class="fg-bold fg-color-primary mr-3">+</span>
						<span class="fg-color-black"
							>Lorem ipsum dolor sit amet, consectetur adipisicing elit?</span
						>
						<p class="fg-size-small fg-color-dull mv-2 d-none">
							Lorem ipsum dolor sit, amet consectetur adipisicing elit. Nobis
							cupiditate ipsam, voluptatibus maxime molestiae architecto nam
							itaque similique impedit dolore possimus aliquam eveniet modi
							asperiores voluptas deserunt sapiente hic quibusdam!
						</p>
					</div>

					<hr />

					<!-- quesiton 3 -->
					<div class="__faq_entry" style="cursor: pointer;">
						<span class="fg-bold fg-color-primary mr-3">+</span>
						<span class="fg-color-black"
							>Lorem ipsum dolor sit amet, consectetur adipisicing elit?</span
						>
						<p class="fg-size-small fg-color-dull mv-2 d-none">
							Lorem ipsum dolor sit, amet consectetur adipisicing elit. Nobis
							cupiditate ipsam, voluptatibus maxime molestiae architecto nam
							itaque similique impedit dolore possimus aliquam eveniet modi
							asperiores voluptas deserunt sapiente hic quibusdam!
						</p>
					</div>

					<hr />

					<!-- quesiton 4 -->
					<div class="__faq_entry" style="cursor: pointer;">
						<span class="fg-bold fg-color-primary mr-3">+</span>
						<span class="fg-color-black"
							>Lorem ipsum dolor sit amet, consectetur adipisicing elit?</span
						>
						<p class="fg-size-small fg-color-dull mv-2 d-none">
							Lorem ipsum dolor sit, amet consectetur adipisicing elit. Nobis
							cupiditate ipsam, voluptatibus maxime molestiae architecto nam
							itaque similique impedit dolore possimus aliquam eveniet modi
							asperiores voluptas deserunt sapiente hic quibusdam!
						</p>
					</div>

					<hr />

					<!-- quesiton 5 -->
					<div class="__faq_entry" style="cursor: pointer;">
						<span class="fg-bold fg-color-primary mr-3">+</span>
						<span class="fg-color-black"
							>Lorem ipsum dolor sit amet, consectetur adipisicing elit?</span
						>
						<p class="fg-size-small fg-color-dull mv-2 d-none">
							Lorem ipsum dolor sit, amet consectetur adipisicing elit. Nobis
							cupiditate ipsam, voluptatibus maxime molestiae architecto nam
							itaque similique impedit dolore possimus aliquam eveniet modi
							asperiores voluptas deserunt sapiente hic quibusdam!
						</p>
					</div>
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