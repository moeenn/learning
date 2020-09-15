document.addEventListener("DOMContentLoaded", main);

// always execute on page load
function main() {
  enableNavMenu();

  const yearLinks = getYearLinks();
  if (!yearLinks) {
    return;
  }

  // activate clicked link, deactivate all others
  monitorActivation(yearLinks);

  const elem = document.getElementById("2020");
  console.log("Is visible: #2020 :: ", isElementVisible(elem));
}

function getYearLinks() {
  const yearLinksContainer = document.getElementById("years");
  if (!yearLinksContainer) {
    console.warn("Year Links Container Not found");
    return;
  }

  const yearLinks = yearLinksContainer.querySelectorAll("li");
  return yearLinks;
}

function setAsInactive(linkElements) {
  for (const element of linkElements) {
    if (element.classList.contains("active")) {
      element.classList.remove("active");
    }
  }
}

function setAsActive(linkElement) {
  if (!linkElement.classList.contains("active")) {
    linkElement.classList.add("active");
  }
}

function monitorActivation(linkElements) {
  for (const element of linkElements) {
    element.addEventListener("click", () => {
      // deactivate all other links
      setAsInactive(linkElements);

      // activate only the selected link
      setAsActive(element);
    });
  }
}

function isElementVisible(el) {
  var rect = el.getBoundingClientRect(),
    vWidth = window.innerWidth || document.documentElement.clientWidth,
    vHeight = window.innerHeight || document.documentElement.clientHeight,
    efp = function (x, y) {
      return document.elementFromPoint(x, y);
    };

  // Return false if it's not in the viewport
  if (
    rect.right < 0 ||
    rect.bottom < 0 ||
    rect.left > vWidth ||
    rect.top > vHeight
  )
    return false;

  // Return true if any of its four corners are visible
  return (
    el.contains(efp(rect.left, rect.top)) ||
    el.contains(efp(rect.right, rect.top)) ||
    el.contains(efp(rect.right, rect.bottom)) ||
    el.contains(efp(rect.left, rect.bottom))
  );
}

function enableNavMenu() {
  openNavMenu();
  closeNavMenu();
}

function openNavMenu() {
  const clickHandler = (event) => {
    event.preventDefault();
    const overlay = document.querySelector(".overlay");
    if (!overlay) {
      console.log("Overlay Menu not found");
      return;
    }

    overlay.style.display = "initial";
  };

  const openButton = document.getElementById("menu");
  if (!openButton) {
    console.log("Nav Menu Button not found");
    return;
  }

  openButton.addEventListener("click", clickHandler);
}

function closeNavMenu() {
  const clickHandler = (event) => {
    event.preventDefault();

    const overlay = document.querySelector(".overlay");
    if (!overlay) {
      console.log("Overlay Menu not found");
      return;
    }

    overlay.style.display = "none";
  };

  const closeButton = document.querySelector(".closeBtn");
  if (!closeButton) {
    console.log("Nav Menu Close Button not found");
    return;
  }
  closeButton.addEventListener("click", clickHandler);
}
