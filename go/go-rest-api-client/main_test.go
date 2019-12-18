package main

import (
	"github.com/stretchr/testify/assert"
	"testing"
)

// data for testing
var (
	DummyUsers = []User{
		{Name: "Someone Important", Email: "important@email.com", Password: "12988hd98h37"}, // valid user
		{Name: "Something Crazy", Email: "crayz@site.com", Password: "s1982s9xhc"},          // valid user
		{Name: "Someone212", Email: "email.com", Password: "12988hd98h37"},                  // wrong email
		{Name: "Someone Important", Email: "important@email.com", Password: "123"},          // wrong password
		{Name: "Someone Unimportant", Email: "important@email.com", Password: "2d2198ckal"}, // duplicate email
		{Email: "important@email.com", Password: "12988hd98h37"},                            // missing name
		{Name: "Something", Password: "12"},                                                 // missing email and wrong password
	}
)

func TestAddUser(t *testing.T) {
	statusCode, err := AddUser(&DummyUsers[0])
	assert.Equal(t, 201, statusCode)
	assert.Nil(t, err)
}
