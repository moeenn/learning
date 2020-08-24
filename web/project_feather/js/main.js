document.addEventListener("DOMContentLoaded", main);

// always execute on page load
function main() {
  toggleNavLinks();
  toggleFAQEntries();
}

// - misc. utility functions -----------------------------------
function $(identifier) {
  return document.querySelector(identifier);
}

function $all(identifier) {
  return document.querySelectorAll(identifier);
}

// - application specific functions ----------------------------
function toggleFAQEntries() {
  const faq_entries = $all(".__faq_entry");
  if (faq_entries.length === 0) {
    console.log("No FAQ Entries found");
    return;
  }

  for (let i = 0; i < faq_entries.length; i++) {
    faq_entries[i].addEventListener("click", () => {
      // show faq details
      const details = faq_entries[i].querySelector("p");
      if (details.classList.contains("d-none")) {
        details.classList.remove("d-none");
      } else {
        details.classList.add("d-none");
      }

      // change icon
      const icon = faq_entries[i].querySelector("span");
      icon.innerText = icon.innerText === "+" ? "-" : "+";
    });
  }
}

function toggleNavLinks() {
  // get the expand button
  const expandButton = $(".navbar__fixed__links_expand");
  const clickHandler = () => {
    const navLinks = $(".navbar__links");

    // toggle navLinks visibility
    navLinks.style.display =
      navLinks.style.display === "none" || navLinks.style.display.length === 0
        ? "contents"
        : "none";
  };

  expandButton.addEventListener("click", clickHandler);
}
