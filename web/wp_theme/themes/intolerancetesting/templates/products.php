<?php
/* Template Name: Products */ 

get_header();
?>

<?php 
	// page main headings and desc
	get_template_part('template-parts/section_page_headers');

	// payment plan cards
	get_template_part('template-parts/section_productplans');

	// video section 
	get_template_part('template-parts/section_video');

?>



<?php get_footer(); ?>