package articles

import (
	"math/rand"
)

type Item struct {
	ID    int    `json:"id"`
	Title string `json:"title"`
	Body  string `json:"body"`
}

type Repo struct {
	Items []Item
}

func New() *Repo {
	return &Repo{
		Items: []Item{},
	}
}

func (repo *Repo) Add(item Item) {
	repo.Items = append(repo.Items, item)
}

func (repo *Repo) GetAll() []Item {
	return repo.Items
}

func GenerateID() int {
	return rand.Int()
}
