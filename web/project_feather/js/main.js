document.addEventListener("DOMContentLoaded", main);

// always execute on page load
function main() {
  toggleFAQEntries();
}

// misc. utility functions
function $(identifier) {
  return document.querySelector(identifier);
}

function $all(identifier) {
  return document.querySelectorAll(identifier);
}

// application specific functions
function toggleFAQEntries() {
  const faq_entries = $all(".__faq_entry");
  if (faq_entries.length === 0) {
    console.log("No FAQ Entries found");
    return;
  }

  for (let i = 0; i < faq_entries.length; i++) {
    faq_entries[i].addEventListener("click", () => {
      const details = faq_entries[i].querySelector("p");

      if (details.classList.contains("d-none")) {
        details.classList.remove("d-none");
      } else {
        details.classList.add("d-none");
      }
    });
  }
}
