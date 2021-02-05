export class Element extends HTMLElement {
  // private field
  #key = Math.random().toString(36).substring(2);

  constructor() {
    super();

    // properties
    this.head = document.head || document.getElementsByTagName("head")[0];
    this.state = {};
    this.styles = '';
  }

  key = () => {
    return `[data-key="${this.#key}"]`;
  };

  markup = () => { };
  listeners = () => { };

  setState = (newState) => {
    Object.assign(this.state, newState);
    this.#render();
  };

  #render = () => {
    const doc = new DOMParser().parseFromString(this.markup(), 'text/html');
    const body = doc.documentElement.querySelector('body > *');
    body.setAttribute('data-key', this.#key);

    this.innerHTML = '';
    this.appendChild(body);
    this.listeners();
  }

  // called when element is added to DOM
  connectedCallback() {
    const styleElem = document.createElement("style");
    styleElem.appendChild(document.createTextNode(this.styles));
    this.head.appendChild(styleElem);

    this.#render();
  }

  // called when element is removed from DOM
  // disconnectedCallback = () => {}

  // attributes (i.e. props) to watch for changes
  // static get observedAttributes() {
  //   return [];
  // }

  // action to perform when observed attributes change
  // attributeChangedCallback(name, oldValue, newValue) {}
}

export function Register(elemName, elemClass) {
  customElements.define(elemName, elemClass);
}
