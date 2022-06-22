package main

import "fmt"

func divide(x float32, y float32) float32 {
	if y == 0 {
		return 0 //@test: (2,0)
	}

	return x / y //@test: (2,1) assert 2
}

func main() {
	fmt.Println(divide(2, 1))
}
