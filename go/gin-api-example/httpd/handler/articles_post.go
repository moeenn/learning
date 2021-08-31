package handler

import (
	"github.com/gin-gonic/gin"
	"learning/platform/articles"
	"net/http"
)

type articlesPostRequest struct {
	Title string `json:"title"`
	Body  string `json:"body"`
}

func ArticlesPost(repo *articles.Repo) gin.HandlerFunc {
	return func(c *gin.Context) {
		body := articlesPostRequest{}
		c.Bind(&body)

		id := articles.GenerateID()
		item := articles.Item{id, body.Title, body.Body}
		repo.Add(item)

		c.JSON(http.StatusCreated, item)
	}
}
