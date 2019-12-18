package main

import (
	"fmt"
	"log"
	"net/rpc"
)

type Item struct {
	Title, Body string
}

func main() {
	var reply Item
	var db []Item

	client, err := rpc.DialHTTP("tcp", "localhost:4040")
	if err != nil {
		log.Fatal("Unable to connect to server:", err)
	}

	item1 := Item{"first", "first test item"}
	item2 := Item{"second", "second test item"}
	item3 := Item{"third", "third test item"}

	// add dummy items
	client.Call("API.AddItem", item1, &reply)
	client.Call("API.AddItem", item2, &reply)
	client.Call("API.AddItem", item3, &reply)

	// get all items
	client.Call("API.GetDB", "", &db)
	fmt.Println("Database:", db)

	// update an Item
	item1.Body = "Updated Item 1"
	client.Call("API.EditItem", item1, &reply)
	fmt.Println("Update:", reply)

	// delete item
	client.Call("API.DeleteItem", item3, &reply)
	fmt.Println("Delete:", reply)
}
