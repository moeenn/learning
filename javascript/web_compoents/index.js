import {Element, Register} from './dist/Element.js';

class Counter extends Element {
  constructor() {
    super();

    this.state = {
      counter: 0,
      background: this.getAttribute("background"),
      color: this.getAttribute("color"),
    };

    this.styles = `
      ${this.key()} button {
        border-radius: 100%;
        height: 2.5rem;
        width: 2.5rem;
        border: 1px solid #c3c0c0;
        box-shadow: 0.1rem 0.2rem 0.3rem rgb(0,0,0,0.1);
        outline: none;
        background-color: ${this.state.background};
        color: ${this.state.color};
      }
    `;
  }

  markup = () => {
    return `
    <div>
    <button>${this.state.counter}</button>
    </div>
  `;
  };

  listeners = () => {
    this.querySelector('button').addEventListener("click", this.onClick);
  }

  // event handlers
  onClick = (e) => {
    e.preventDefault();
    this.setState({ counter: this.state.counter + 1 });
    console.log("Button Clicked :: ", this.state.counter);
  };
}

Register('f-counter', Counter);