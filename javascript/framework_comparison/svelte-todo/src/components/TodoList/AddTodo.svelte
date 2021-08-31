<main>
	<form 
		class="add_new d-flex" 
		on:submit|preventDefault={() => addTodo(todo.name)}
		on:submit|preventDefault={clearInput}
	>
		<input type="text" name="new" placeholder="Add New" bind:value={todo.name} />
		<input type="submit" value="Add">
	</form>
</main>

<script>
	export let addTodo;
	let todo = {
		name: null,
	};

	/**
	 *  state management functions
	 * 
	*/
	function clearInput() {
		todo.name = null;
	} 
</script>

<style>
:root {
	--radius: 0.3rem;
}

.add_new input[type="text"] {
	flex: 5;
	border-radius: var(--radius) 0 0 var(--radius);
}

.add_new input[type="submit"] {
	flex: 1; 
	border-radius: 0 var(--radius) var(--radius) 0;
}
</style>