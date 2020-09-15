document.addEventListener("DOMContentLoaded", main);

// always execute on page load
function main() {
  const yearLinks = getYearLinks();
  if (!yearLinks) {
    return;
  }

  // activate clicked link, deactivate all others
  monitorActivation(yearLinks);
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
