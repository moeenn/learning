/*
	requirements for RPC:
	1. all functions need to be methods
	2. methods must take in two arguments
		a. first argument is the object being passed into the function
		b. second argument is a pointer to an object which contains the
		   results of the function
	3. methods must return only one value i.e. error
	4. methods must be exported
	5. the struct attribures must be exported (on both server and client)
*/

package main

import (
	"log"
	"net"
	"net/http"
	"net/rpc"
)

// globals
type API int

var database []Item

// custom object structs
type Item struct {
	Title, Body string
}

// CRUD methods
// we don't really need the title argument, but the specification
// requires that we must have two arguments
func (a *API) GetDB(title string, reply *[]Item) error {
	*reply = database
	log.Println("Complete Database requested")
	return nil
}

func (a *API) GetByName(title string, reply *Item) error {
	var returnValue Item

	for _, item := range database {
		if item.Title == title {
			returnValue = item
		}
	}

	*reply = returnValue
	log.Println("Single Item requested:", title)
	return nil
}

func (a *API) AddItem(item Item, reply *Item) error {
	database = append(database, item)
	*reply = item
	log.Println("Item Added to Database:", item)
	return nil
}

func (a *API) EditItem(edit Item, reply *Item) error {
	var changed Item

	for id, value := range database {
		if value.Title == edit.Title {
			database[id] = edit
			changed = database[id]
		}
	}

	*reply = changed
	log.Println("Item Updated:", changed)
	return nil
}

func (a *API) DeleteItem(item Item, reply *Item) error {
	var del Item

	for id, value := range database {
		if value.Title == item.Title && value.Body == item.Body {
			database = append(database[:id], database[id+1:]...)
			del = item
			break
		}
	}

	*reply = del
	log.Println("Item Deleted:", del)
	return nil
}

func main() {
	var api = new(API)
	err := rpc.Register(api)
	if err != nil {
		log.Fatal("Unable to register API:", err)
	}

	rpc.HandleHTTP()

	listerner, err := net.Listen("tcp", ":4040")
	if err != nil {
		log.Fatal("Unable to start listerner:", err)
	}

	log.Println("Serving RPC on port", 4040)
	err = http.Serve(listerner, nil)
	if err != nil {
		log.Fatal("Unable to Start Server:", err)
	}
}
