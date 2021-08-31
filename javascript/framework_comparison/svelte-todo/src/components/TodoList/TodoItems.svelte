<main>
	{#each todos as todo (todo.id)}
		<div class="todo d-flex" transition:slide="{{duration: 300, easing: elasticInOut}}">
			<input name="new_todo" type="checkbox" checked={todo.complete} on:click={() => toggleStatus(todo.id) } />
			<label for="new_todo" on:click={() => toggleStatus(todo.id) }>{todo.name}</label>
			<button class="delete" on:click={() => deleteTodo(todo.id)}>x</button>
		</div>
	{:else}
		<div class="center">
			<span class="text-dull">No Items added</span>
		</div>
	{/each}
</main>

<script>
	/**
	 *  svelte packages
	 * 
	*/
	import { slide } from "svelte/transition";
	import { elasticInOut } from "svelte/easing";

	/**
	 *  props
	 * 
	*/
	export let todos;
	export let deleteTodo;
	export let toggleStatus;
</script>

<style>

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