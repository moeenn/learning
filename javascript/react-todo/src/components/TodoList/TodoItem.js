import styles from "./TodoItem.module.css";

function TodoItem(props) {
  return (
    <div className={styles.todo_item}>
      <input
        type="checkbox"
        checked={props.todo.done}
        onChange={() => props.markTodoItem(props.todo.id)}
      />
      <span>{props.todo.text}</span>
      <span
        className={styles.delete}
        onClick={() => props.deleteTodoItem(props.todo.id)}
      >
        x
      </span>
    </div>
  );
}

export default TodoItem;
