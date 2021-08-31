package handler

import (
	"net/http"
	"github.com/gin-gonic/gin"
)

func HomeGet() gin.HandlerFunc {
	return func(c *gin.Context) {
		c.JSON(http.StatusOK, gin.H{
			"message": "welcome to the test api",
		})
	}
}