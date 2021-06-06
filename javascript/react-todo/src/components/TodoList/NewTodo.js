import { useRef } from "react";
import styles from "./NewTodo.module.css";

const NewTodo = ({ setTodos }) => {
  const todoNameRef = useRef();

  return (
    <form
      className={styles.flex}
      onSubmit={(e) =>
        handleSubmit(e, setTodos, todoNameRef)
      }
    >
      <input
        className={styles.item_input}
        type="text"
        placeholder="Add Item..."
        ref={todoNameRef}
      />
      <input
        type="submit"
        className={styles.item_submit}
        onClick={(e) =>
          handleSubmit(e, setTodos, todoNameRef)
        }
        value="Add"
      />
    </form>
  );
};

const generate_uuid = () => {
  return Math.random().toString(36).substring(7);
};

const handleSubmit = (e, setTodos, todoNameRef) => {
  e.preventDefault();
  const text = todoNameRef.current.value;

  const newItem = {
    id: generate_uuid(),
    done: false,
    text,
  };

  setTodos(prevousTodos => [...prevousTodos, newItem]);
  todoNameRef.current.value = null;
};

export default NewTodo;