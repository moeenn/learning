<?php
/* Template Name: Contact */ 

get_header();
?>

<?php 
	// page main headings and desc
	get_template_part('template-parts/section_page_headers');
?>

<section class="mb-big">
	<div class="container">
		<?php 
			$form_short_code = get_field('contact__contact_form_7__short_code');
			echo do_shortcode($form_short_code); 
		?>
	</div>
</section>

<?php get_footer(); ?>