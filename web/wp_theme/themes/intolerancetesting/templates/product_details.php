<?php
/* Template Name: Product Details */ 

get_header();
?>

<section>
	<div class="container pv-big">
		<div class="bg-color-white shadow rounded-normal p-5">
			<div class="d-grid two-col-custom">
				<!-- product images -->
				<div class="bg-colo-dull rounded-normal">
					<img
						src="<?php the_field('product_page__product_img'); ?>"
						class="products_page__product_image"
					/>
				</div>

				<!-- product details -->
				<div>
					<div class="d-flex flex-h">
						<span class="recommended"><?php the_field('product_page__product_recommended'); ?></span>
						<span
							class="fg-size-small fg-color-dull fg-bold align-center uppercase ml-2"
							><?php the_field('product_page__product_short_name'); ?></span
						>
					</div>

					<div class="mv-2">
						<h3 class="fg-bold fg-color-black mb-0">
							<?php the_field('product_page__product_full_name'); ?>
						</h3>
						<h5>
							<?php the_field('product_page__product_short_desc'); ?>
							<span class="fg-color-primary">from <?php the_field('product_page__product_price'); ?></span>
						</h5>
						<span class="fg-size-normal fg-color-primary"
							><?php the_field('product_page__product_tags'); ?></span
						>
					</div>

					<div class="mv-3">
						<div
							class="products_page__quantity_box rounded-corners border d-flex flex-h mr-2"
						>
							<span class="fg-color-dull fg-size-small align-center"
								>Quantity</span
							>
							<button
								class="align-center fg-bold mh-1 __quantity_decrement"
							>
								-
							</button>
							<span
								class="align-center fg-color-primary fg-bold __quantity_value"
								>1</span
							>
							<button
								class="align-center fg-bold ml-1 __quantity_increment"
							>
								+
							</button>
						</div>

						<button class="button-primary shadow-accent">
							Add to Cart
						</button>
					</div>

					<p class="fg-color-dull uppercase"><?php get_field('product_page__product_desc_heading'); ?></p>
					<p class="fg-color-dull fg-size-small mt-1">
						<?php the_field('product_page__product_desc'); ?>
					</p>
				</div>
			</div>

			<!-- tabs -->
			<div class="products_page__tabs d-flex flex-h mt-4">
				<a
					href="#"
					id="products_page__tab__product_desc"
					class="fg-size-small p-3 active"
					>Product Description</a
				>
				<a href="#" class="fg-size-small p-3" id="products_page__tab__faq"
					>Frequently Asked Questions</a
				>
				<a
					href="#"
					class="fg-size-small p-3"
					id="products_page__tab__trusted_items"
					>Items we trust</a
				>
				<a
					href="#"
					class="fg-size-small p-3"
					id="products_page__tab__shipping"
					>Shipping and Returns</a
				>
			</div>

			<!-- 1. Product Descriptions -->
			<div id="products_page__tab__product_desc__content">
				<div class="mt-5">
					<p class="fg-size-small fg-color-dull uppercase mv-2">
						About this test
					</p>
					<div class="d-grid two-col-custom gap-5">
						<!-- col 1 -->
						<div>
							<p class="fg-size-small fg-color-dull pb-1">
								Lorem ipsum dolor sit amet, consectetur adipisicing elit.
								Nesciunt nulla praesentium repellendus, iusto corrupti vitae
								incidunt? Sit quod inventore dolorem architecto vero ducimus
								fugiat perspiciatis harum error possimus, aliquam nam.
							</p>

							<p class="fg-size-small fg-color-dull pb-1">
								Lorem ipsum dolor sit amet, consectetur adipisicing elit.
								Nesciunt nulla praesentium repellendus, iusto corrupti vitae
								incidunt? Sit quod inventore dolorem architecto vero ducimus
								fugiat perspiciatis harum error possimus, aliquam nam.
							</p>

							<p class="fg-size-small fg-color-dull pb-1">
								Lorem ipsum dolor sit amet, consectetur adipisicing elit.
								Nesciunt nulla praesentium repellendus, iusto corrupti vitae
								incidunt? Sit quod inventore dolorem architecto vero ducimus
								fugiat perspiciatis harum error possimus, aliquam nam.
							</p>

							<p class="fg-size-small fg-color-dull pb-1">
								Lorem ipsum dolor sit amet, consectetur adipisicing elit.
								Nesciunt nulla praesentium repellendus, iusto corrupti vitae
								incidunt? Sit quod inventore dolorem architecto vero ducimus
								fugiat perspiciatis harum error possimus, aliquam nam.
							</p>
						</div>

						<!-- col 2 -->
						<div>
							<img
								src="images/video_thumbnail.jpg"
								class="rounded-normal products_page__product_image"
							/>
						</div>
					</div>
				</div>
			</div>

			<!-- 2. frequently asked questions -->
			<div id="products_page__tab__faq__content" class="d-none">
				<div class="bg-color-white pv-big">
					<!-- question 1 -->
					<div class="__faq_entry" style="cursor: pointer;">
						<span class="fg-bold fg-color-primary mr-3">+</span>
						<span class="fg-color-black"
							>Lorem ipsum dolor sit amet, consectetur adipisicing
							elit?</span
						>
						<p class="fg-size-small fg-color-dull mv-2 d-none">
							Lorem ipsum dolor sit, amet consectetur adipisicing elit.
							Nobis cupiditate ipsam, voluptatibus maxime molestiae
							architecto nam itaque similique impedit dolore possimus
							aliquam eveniet modi asperiores voluptas deserunt sapiente hic
							quibusdam!
						</p>
					</div>

					<hr />

					<!-- quesiton 2 -->
					<div class="__faq_entry" style="cursor: pointer;">
						<span class="fg-bold fg-color-primary mr-3">+</span>
						<span class="fg-color-black"
							>Lorem ipsum dolor sit amet, consectetur adipisicing
							elit?</span
						>
						<p class="fg-size-small fg-color-dull mv-2 d-none">
							Lorem ipsum dolor sit, amet consectetur adipisicing elit.
							Nobis cupiditate ipsam, voluptatibus maxime molestiae
							architecto nam itaque similique impedit dolore possimus
							aliquam eveniet modi asperiores voluptas deserunt sapiente hic
							quibusdam!
						</p>
					</div>

					<hr />

					<!-- quesiton 3 -->
					<div class="__faq_entry" style="cursor: pointer;">
						<span class="fg-bold fg-color-primary mr-3">+</span>
						<span class="fg-color-black"
							>Lorem ipsum dolor sit amet, consectetur adipisicing
							elit?</span
						>
						<p class="fg-size-small fg-color-dull mv-2 d-none">
							Lorem ipsum dolor sit, amet consectetur adipisicing elit.
							Nobis cupiditate ipsam, voluptatibus maxime molestiae
							architecto nam itaque similique impedit dolore possimus
							aliquam eveniet modi asperiores voluptas deserunt sapiente hic
							quibusdam!
						</p>
					</div>

					<hr />

					<!-- quesiton 4 -->
					<div class="__faq_entry" style="cursor: pointer;">
						<span class="fg-bold fg-color-primary mr-3">+</span>
						<span class="fg-color-black"
							>Lorem ipsum dolor sit amet, consectetur adipisicing
							elit?</span
						>
						<p class="fg-size-small fg-color-dull mv-2 d-none">
							Lorem ipsum dolor sit, amet consectetur adipisicing elit.
							Nobis cupiditate ipsam, voluptatibus maxime molestiae
							architecto nam itaque similique impedit dolore possimus
							aliquam eveniet modi asperiores voluptas deserunt sapiente hic
							quibusdam!
						</p>
					</div>

					<hr />

					<!-- quesiton 5 -->
					<div class="__faq_entry" style="cursor: pointer;">
						<span class="fg-bold fg-color-primary mr-3">+</span>
						<span class="fg-color-black"
							>Lorem ipsum dolor sit amet, consectetur adipisicing
							elit?</span
						>
						<p class="fg-size-small fg-color-dull mv-2 d-none">
							Lorem ipsum dolor sit, amet consectetur adipisicing elit.
							Nobis cupiditate ipsam, voluptatibus maxime molestiae
							architecto nam itaque similique impedit dolore possimus
							aliquam eveniet modi asperiores voluptas deserunt sapiente hic
							quibusdam!
						</p>
					</div>
				</div>
			</div>

			<!-- 3. items we trust -->
			<div id="products_page__tab__trusted_items__content" class="d-none">
				<div class="mv-5">
					<h3 class="fg-color-dull">Design Pending</h3>
				</div>
			</div>

			<!-- 4. shipping and returns -->
			<div id="products_page__tab__shipping__content" class="d-none">
				<div class="mv-5">
					<h3 class="fg-color-dull">Design Pending</h3>
				</div>
			</div>
		</div>
	</div>
</section>


<?php 
	// testimonials section 
	get_template_part('template-parts/section_testimonials');

?>

<?php get_footer(); ?>