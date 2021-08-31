import styles from "./TodoItem.module.css";

function TodoItem({ todo, markTodoItem, deleteTodoItem }) {
  return (
    <div className={styles.todo_item}>
      <input
        type="checkbox"
        checked={todo.done}
        onChange={() => markTodoItem(todo.id)}
      />
      <span>{todo.text}</span>
      <span
        className={styles.delete}
        onClick={() => deleteTodoItem(todo.id)}
      >
        x
      </span>
    </div>
  );
}

export default TodoItem;
