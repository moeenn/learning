package articles

import (
	"testing"
)

func TestAdd(t *testing.T) {
	feed := New()
	feed.Add(Item{})

	if len(feed.Items) == 0 {
		t.Errorf("Item not added to the feed")
	}
}

func TestGetAll(t *testing.T) {
	feed := New()
	feed.Add(Item{})

	got := feed.GetAll()

	if len(got) != 1 {
		t.Errorf("Item was not added to the feed")
	}
 }