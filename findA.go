package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "Hello, World! aAa"

	sLower := strings.ToLower(s)

	if strings.Contains(sLower, "a") {
		count := strings.Count(sLower, "a")
		fmt.Printf("A letra 'a' existe na string e ocorre %d vezes.\n", count)
	} else {
		fmt.Println("A letra 'a' não existe na string.")
	}
}
