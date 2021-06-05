import { useState } from "react";
import styles from "./NewTodo.module.css";

const NewTodo = (props) => {
  const [item, setItem] = useState("");

  return (
    <form
      className={styles.flex}
      onSubmit={(e) =>
        handleSubmit(e, props.todos, props.setTodos, item)
      }
    >
      <input
        className={styles.item_input}
        type="text"
        placeholder="Add Item..."
        onChange={(e) => handleChange(e, setItem)}
      />
      <input
        type="submit"
        className={styles.item_submit}
        onClick={(e) =>
          handleSubmit(e, props.todos, props.setTodos, item)
        }
        value="Add"
      />
    </form>
  );
};

const generate_uuid = () => {
  return Math.random().toString(36).substring(7);
};

const handleChange = (event, setItem) => {
  const value = event.target.value;
  setItem(value);
};

const handleSubmit = (e, todos, setTodos, item) => {
  e.preventDefault();

  const newItem = {
    id: generate_uuid(),
    text: item,
    done: false,
  };

  setTodos([...todos, newItem]);
};

export default NewTodo;