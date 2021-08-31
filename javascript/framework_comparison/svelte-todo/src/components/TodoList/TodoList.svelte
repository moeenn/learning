<svelte:head>
	<link rel="stylesheet" href="./styles/wireframe.css" />
</svelte:head>

<script>
	/**
	 *  functional utilities
	 * 
	*/
	import {uuid} from "../../utils/utils.js";

	/**
	 *  child components
	 * 
	*/
	import AddTodo from "./AddTodo.svelte";
	import TodoItems from "./TodoItems.svelte";

	/**
	 *  state
	 * 
	*/
	let todos = [];	


	/**
	 *  state management functions
	 * 
	*/
	function addTodo(todo_name) {
		if (todo_name == '' || todo_name == null) return;

		const new_todo = {
			id: uuid(),
			name: todo_name,
			complete: false,
		};

		todos = [...todos, new_todo];
	}

	function toggleStatus(id) {
		todos = [...todos].map(todo => {
			if (todo.id === id) {
				todo.complete = !todo.complete
			}
			return todo;
		});
	}

	function deleteTodo(id) {
		todos = [...todos].filter(todo => {
			return todo.id !== id;
		});
	}
</script>

<main>
	<AddTodo addTodo={addTodo} />
	<hr />
	<TodoItems 
		todos={todos} 
		toggleStatus={toggleStatus}
		deleteTodo={deleteTodo}
	/>
</main>

