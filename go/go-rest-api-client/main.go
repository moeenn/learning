package main

import (
	"bytes"
	"encoding/json"
	"errors"
	"fmt"
	"io/ioutil"
	"net/http"
)

var (
	APIURL = "http://127.0.0.1:8000/api/users"
)

// user struct
type User struct {
	ID       int64  `json:id,omitempty`
	Name     string `json:"name,omitempty"`
	Email    string `json:"email,omitempty"`
	Password string `json:"password,omitempty"`
}

func AddUser(user *User) (int, error) {
	requestBody, marshalErr := json.Marshal(*user)
	if marshalErr != nil {
		return 0, errors.New("Unable to Marshal User Object")
	}

	response, respErr := http.Post(APIURL, "application/json", bytes.NewBuffer(requestBody))
	if respErr != nil {
		return 0, errors.New("Unable to send Post request to API")
	}

	defer response.Body.Close()

	body, readErr := ioutil.ReadAll(response.Body)
	if readErr != nil {
		return 0, errors.New("Unable to Read Response Body")
	}

	decodeErr := json.Unmarshal(body, user)
	if decodeErr != nil {
		return 0, decodeErr
	}

	return response.StatusCode, nil
}

func GetAllUsers(users *[]User) error {
	response, err := http.Get(APIURL)
	if err != nil {
		return err
	}

	defer response.Body.Close()

	body, readErr := ioutil.ReadAll(response.Body)
	if readErr != nil {
		return readErr
	}

	unmarshalErr := json.Unmarshal(body, users)
	if unmarshalErr != nil {
		return unmarshalErr
	}

	return nil
}

func GetUser(id int64, user *User) error {
	response, requestErr := http.Get(fmt.Sprintf("%v/%v", APIURL, id))
	if requestErr != nil {
		return requestErr
	}

	defer response.Body.Close()

	body, readErr := ioutil.ReadAll(response.Body)
	if readErr != nil {
		return readErr
	}

	unmarshalErr := json.Unmarshal(body, user)
	if unmarshalErr != nil {
		return unmarshalErr
	}

	return nil
}

// // user with id is provided as argument
func UpdateUser(user User) error {
	userJSON, marshalErr := json.Marshal(user)
	if marshalErr != nil {
		return errors.New("Unable to Marshal User")
	}

	response, requestErr := http.NewRequest(http.MethodPut,
		fmt.Sprintf("%v/%v", APIURL, user.ID),
		bytes.NewBuffer(userJSON))

	if requestErr != nil {
		return errors.New("Unable to send PUT request to API")
	}

	defer response.Body.Close()

	body, readErr := ioutil.ReadAll(response.Body)
	if readErr != nil {
		return errors.New("Unable to read response")
	}

	fmt.Println(string(body))
	return nil
}

// func RemoveUser(id int64, user *User) error {
// }
