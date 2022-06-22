# testing-framework
insource unitary testing framework

The idea of this project is to embed directly unitary tests inside source code in order to reduce back and forth between code and its unitary tests.
Using old method of testing when you rename a function for example you should rename all the tests related to it

## How it works
The framework will use language [AST](https://en.wikipedia.org/wiki/Abstract_syntax_tree) to inject code to assert in the code

So unitary tests will look like :

```golang
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
```

Tests will look the same for other languages