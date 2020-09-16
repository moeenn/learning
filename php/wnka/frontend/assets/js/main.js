document.addEventListener("DOMContentLoaded", main);

// always execute on page load
function main() {
  // enable opening & closing of navigation menu
  enableNavMenu();

  const yearLinks = getYearLinks();
  if (!yearLinks) {
    return;
  }

  // activate clicked link, deactivate all others
  monitorActivation(yearLinks);

  // activate relevant year link on scroll event
  identifyVisibleYear(yearLinks);

  // enable opening & closing of preview dialogue for posts
  enablePostPreviews();
}

/*
 * Navigation menu related functions
 */
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

  const closeButton = document.querySelector("#myNav .closeBtn");
  if (!closeButton) {
    console.log("Nav Menu Close Button not found");
    return;
  }
  closeButton.addEventListener("click", clickHandler);
}

/*
 *  Timeline related functions
 */
function getYearLinks() {
  const yearLinksContainer = document.getElementById("years");
  if (!yearLinksContainer) {
    console.log("Year Links Container Not found");
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

// check if an element is visible or not
function isElementVisible(el) {
  const rect = el.getBoundingClientRect();
  const vWidth = window.innerWidth || document.documentElement.clientWidth;
  const vHeight = window.innerHeight || document.documentElement.clientHeight;
  const efp = function (x, y) {
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

function getIDFromYearLink(linkElement) {
  const href = linkElement.querySelector("a").href;
  const yearID = href.split("/#")[1];
  return yearID;
}

function identifyVisibleYear(linkElements) {
  const yearIDs = [];

  // extract year IDs from links
  for (const link of linkElements) {
    const yearID = getIDFromYearLink(link);
    yearIDs.push(yearID);
  }

  const postsContainer = document.getElementById("posts");
  postsContainer.addEventListener("scroll", () => {
    for (const id of yearIDs) {
      const elem = document.querySelector(`[id='${id}']`);
      if (!elem) {
        return;
      }

      if (isElementVisible(elem)) {
        autoUpdateSelectedYear(`#${id}`);
      }
    }
  });
}

function autoUpdateSelectedYear(currentYearID) {
  const yearLinks = getYearLinks();
  if (!yearLinks) {
    return;
  }

  for (const link of yearLinks) {
    let yearID = getIDFromYearLink(link);
    yearID = `#${yearID}`;

    if (currentYearID === yearID) {
      setAsInactive(yearLinks);
      link.classList.add("active");
    }
  }
}

/*
 *  Post preview sections
 */
function enablePostPreviews() {
  attachPostEventListeners();
  closePostPreview();
}

function openPostPreview() {
  const previewWindow = document.querySelector(".post-preview");
  previewWindow.style.display = "block";
}

function attachPostEventListeners() {
  const postLinks = document.querySelectorAll("#posts li a");
  for (const link of postLinks) {
    link.addEventListener("click", (event) => {
      event.preventDefault();
      console.log("Link clicked");
      openPostPreview();
    });
  }
}

function closePostPreview() {
  const closeBtn = document.querySelector("#close-post-preview.closeBtn");
  if (!closeBtn) {
    console.log("Post Preview close button not found");
    return;
  }

  closeBtn.addEventListener("click", (event) => {
    event.preventDefault();
    console.log("preview close clicked");

    const previewWindow = document.querySelector(".post-preview");
    previewWindow.style.display = "none";
  });
}
