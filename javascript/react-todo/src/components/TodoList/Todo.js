import { useState, useEffect } from "react";

import NewTodo from "./NewTodo.js";
import TodoItem from "./TodoItem.js";

import styles from "./Todo.module.css";

const TodoList = () => {
  const [todos, setTodos] = useState([]);
  const storeName = "todos";

  /**
   *  get todos from localstorage, if they exist
   *  this will only run once because the second argument will never change
  */
  useEffect(() => {
    const todosJSON = localStorage.getItem(storeName);
    if (!todosJSON) return;

    setTodos(JSON.parse(todosJSON));
  }, []);

  /**
   *  save todos to localstorage. This hook runs every time the values in the 
   *  second argument change
  */
  useEffect(() => {
    const todosJSON = JSON.stringify(todos);
    localStorage.setItem(storeName, todosJSON);
  }, [todos]);

  return (
    <>
      <NewTodo setTodos={setTodos} />

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