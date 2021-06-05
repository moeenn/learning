import { useState } from "react";

import NewTodo from "./NewTodo.js";
import TodoItem from "./TodoItem.js";

import styles from "./Todo.module.css";

const TodoList = () => {
  const [todos, setTodos] = useState([]);

  return (
    <>
      <NewTodo todos={todos} setTodos={setTodos} />

      <div className={styles.todo_list}>
        {todos.map((todo) => {
          return (
            <TodoItem
              key={todo.id}
              todo={todo}
              markTodoItem={(id) => markTodoItem(id, todos, setTodos)}
              deleteTodoItem={(id) => deleteTodoItem(id, todos, setTodos)}
            />
          );
        })}
      </div>
    </>
  );
};

const markTodoItem = (id, todos, setTodos) => {
  setTodos(
    todos.map((todo) => {
      if (todo.id === id) {
        todo.done = !todo.done;
      }

      return todo;
    })
  );
};

const deleteTodoItem = (id, todos, setTodos) => {
  setTodos(
    todos.filter((todo) => {
      return todo.id !== id;
    })
  );
};

export default TodoList;
