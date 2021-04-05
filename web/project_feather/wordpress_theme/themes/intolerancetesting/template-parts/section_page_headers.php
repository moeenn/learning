<?php
/**
 * Template part for displaying page main headings and descriptions
 *
 *
 * @package intolerance
 */

?>

<section>
	<div class="container pv-big">
		<div class="alergy_v_intolerance__comparison fg-align-center">
			<h2 class="fg-color-primary">
				<?php the_field('page_headers__heading_main'); ?>
			</h2>
			<p>
				<?php the_field('page_headers__desc'); ?>
			</p>
		</div>
	</div>
</section>
