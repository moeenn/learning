package handler

import (
	"net/http"
	"github.com/gin-gonic/gin"
	"learning/platform/articles"
)

func ArticlesGet(repo *articles.Repo) gin.HandlerFunc {
	return func(c *gin.Context) {
		results := repo.GetAll()
		c.JSON(http.StatusOK, results)
	}
}