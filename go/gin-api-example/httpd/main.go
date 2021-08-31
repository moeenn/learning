package main

import (
	"github.com/gin-gonic/gin"
	"learning/httpd/handler"
	"learning/platform/articles"
)

func main() {
	router := gin.Default()
	store := articles.New()

	api := router.Group("/api/")
	{
		api.GET("/home", handler.HomeGet())
		api.GET("/articles", handler.ArticlesGet(store))
		api.POST("/articles", handler.ArticlesPost(store))
	}

	router.Run(":8000")
}
