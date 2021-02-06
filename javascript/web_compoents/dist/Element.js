export class Element extends HTMLElement {
  // private properties
  #key = generateKey();
  #style = getStyleTag();

  constructor() {
    super();

    // public properties
    this.props = {};
    this.state = {};
  }

  /**
   *  public methods
   * 
  */
  key = () => {
    return `[data-key="${this.#key}"]`;
  };

  #getProps = () => {
    const attributes = this.attributes;

    for (let i = 0; i < attributes.length; i++) {
      Object.assign(this.props, {
        [attributes[i].nodeName]: attributes[i].nodeValue
      });
    }

    Object.freeze(this.props);
  };

  markup = () => { };
  styles = () => { };
  listeners = () => { };

  setState = (newState) => {
    Object.assign(this.state, newState);
    this.#render();
  };

  // called when element is added to DOM
  connectedCallback() {
    this.#getProps();
    const styleNode = document.createTextNode(this.styles());
    this.#style.appendChild(styleNode);
    this.#render();

    console.log(this.props);
  }

  /**
   *  private methods
   * 
  */
  #render = () => {
    const doc = new DOMParser().parseFromString(this.markup(), 'text/html');
    const body = doc.documentElement.querySelector('body > *');
    body.setAttribute('data-key', this.#key);

    this.innerHTML = '';
    this.appendChild(body);
    this.listeners();
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

function generateKey() {
  return Math.random().toString(36).substring(2);
}


function getHeadTag() {
  const head = document.head || document.getElementsByTagName("head")[0];
  return head;
}

function getStyleTag() {
  const head = getHeadTag();
  const existingStyle = document.head.querySelector('style');

  if (!existingStyle) {
    const styleElem = document.createElement("style");
    head.appendChild(styleElem);
    return styleElem;
  }

  return existingStyle;
};