<svelte:head>
	<link rel="stylesheet" href="./styles/wireframe.css" />
</svelte:head>

<script>
	import { slide } from "svelte/transition";
	import { elasticInOut } from "svelte/easing";

	let todos = [];	

	let current = {
		id: 0,
		name: null,
	};

	function handleAdd() {
		if (current.name == '' || current.name == null) return;
		const new_todo = {
			id: current.id++,
			name: current.name,
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

	function handleDelete(id) {
		todos = [...todos].filter(todo => {
			return todo.id !== id;
		});
	}

	function showState() {
		console.log(todos);
	}
</script>

<main>
	<h1>Todos</h1>
	<hr />

	<label for="new">Add New</label>
	<form class="add_new d-flex" on:submit|preventDefault={handleAdd}>
		<input type="text" name="new" bind:value={current.name} />
		<input type="submit" value="Add">
	</form>


	<hr />
	{#each todos as todo (todo.id)}
		<div class="todo d-flex" transition:slide="{{duration: 300, easing: elasticInOut}}">
			<input name="new_todo" type="checkbox" checked={todo.complete} on:click={() => toggleStatus(todo.id) } />
			<label for="new_todo" on:click={() => toggleStatus(todo.id) }>{todo.name}</label>
			<button class="delete" on:click={() => handleDelete(todo.id)}>x</button>
		</div>
	{:else}
		<div class="center">
			<span class="text-dull">No Items added</span>
		</div>
	{/each}
</main>

<style>
.d-flex {
	display: flex;
}

.todo {
	padding-bottom: 1rem;
}

.todo input {
	margin: auto 1rem auto 0;
}

.todo label {
	display: inline-block;
	margin: auto 0;
	cursor: pointer;
	flex: 1;
}

.add_new input[type="text"] {
	flex: 5;
}

.add_new input[type="submit"] {
	flex: 1; 
}

.center {
	text-align: center;
}

.text-dull {
	color: var(--font-color-dull);
}

.delete {
	border: none;
	background: none;
	color: rgb(196, 69, 69);
	font-weight: bold;
	margin: auto 0 auto auto;
	cursor: pointer;
}

.delete:hover {
	background: rgba(0,0,0,0.1);
}

</style>