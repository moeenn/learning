$(document).ready(function () {
  $(".slider_container").slick({
    slidesToShow: 3,
    lazyLoad: "ondemand",
    slidesToScroll: 2,
    speed: 300,
    infinite: false,
    responsive: [
      {
        breakpoint: 900,
        settings: {
          slidesToShow: 2,
          slidesToScroll: 1,
        },
      },
      {
        breakpoint: 600,
        settings: {
          slidesToShow: 1,
          slidesToScroll: 1,
        },
      },
    ],
  });
});
