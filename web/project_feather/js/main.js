document.addEventListener("DOMContentLoaded", main);

// always execute on page load
function main() {
  toggleNavLinks();
  toggleFAQEntries();
  quantityCounter();
  productPageTabs();
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

// - product description & order page ----------------------------
function quantityCounter() {
  incrementQuantityCounter();
  decrementQuantityCounter();
}

function incrementQuantityCounter() {
  const incrementButton = $(".__quantity_increment");
  if (!incrementButton) {
    console.log("Quantity Increment button not found");
    return;
  }

  incrementButton.addEventListener("click", () => {
    console.log("Increment Action");
    let quantityValue = $(".__quantity_value");

    if (!quantityValue) {
      console.log("Quantity value not found");
      return;
    }

    const newValue = parseInt(quantityValue.innerText) + 1;
    quantityValue.innerText = newValue;
  });
}

function decrementQuantityCounter() {
  const decrementButton = $(".__quantity_decrement");
  if (!decrementButton) {
    console.log("Quantity Decrement button not found");
    return;
  }

  decrementButton.addEventListener("click", () => {
    console.log("Decrement Action");
    let quantityValue = $(".__quantity_value");

    if (!quantityValue) {
      console.log("Quantity value not found");
      return;
    }

    const newValue = parseInt(quantityValue.innerText) - 1;
    if (newValue < 1) {
      return;
    }

    quantityValue.innerText = newValue;
  });
}

function getProductTabs() {
  const tabs = $(".products_page__tabs");
  const tab_anchors = tabs.querySelectorAll("a");
  const results = [];

  for (const anchor of tab_anchors) {
    if (anchor.id.length > 0) results.push("#" + anchor.id);
  }

  return results;
}

function productPageTabs() {
  const tabIDs = getProductTabs();

  for (const id of tabIDs) {
    const tab = $(id);
    if (!tab) {
      console.log("Tab with ID" + id + " not found");
      return;
    }

    tab.addEventListener("click", (event) => {
      event.preventDefault();
      console.log(`${id} tab clicked`);
      activateTab(id);
    });
  }
}

function activateTab(tabID) {
  const tab = $(tabID);
  if (!tab) {
    console.log("Tab with ID " + tabID + " not found");
    return;
  }

  if (!tab.classList.contains("active")) {
    console.log(`Tab ${tabID} is inactive`);
    tab.classList.add("active");
  }

  const tabContent = $(`${tabID}__content`);
  if (!tabContent) {
    console.log(`Tab ${tabID}__content not found`);
    return;
  }

  tabContent.style.display = "contents";
  deactivateTabs(tabID);
}

function deactivateTabs(activeTabID) {
  const allTabs = getProductTabs();
  for (const tab of allTabs) {
    const tabAnchor = $(tab);

    if (`#${tabAnchor.id}` === activeTabID) {
      continue;
    }

    tabAnchor.classList.remove("active");
    const tabContent = $(`${tab}__content`);
    tabContent.style.display = "none";
  }
}
