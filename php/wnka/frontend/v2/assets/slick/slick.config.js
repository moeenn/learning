$(document).ready(function () {
  $(".slider-container").slick({
    slidesToShow: 1,
    lazyLoad: "ondemand",
    slidesToScroll: 1,
    speed: 300,
    infinite: false,
  });
});
