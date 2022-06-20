# testing-framework
insource unitary testing framework

The idea of this project is to embed directly unitary tests inside source code in order to reduce back and forth between code and its unitary tests.
Using old method of testing when you rename a function for example you should rename all the tests related to it



## How it works

your unitary tests will look like this :

```python
# @test: (2,0) assert Exception
# @test: (2,1) assert 2
def divider(x:int, y:int) -> float :
    if y == 0:
        raise Exception

    return x / y
```
or

```python
def divider(x:int, y:int) -> float :
    if y == 0:
        raise Exception #@test: (2,0)

    return x / y #@test: (2,1) assert 2
```

for python and same logic for c/c++ code

```cpp
float divider(int x, int y)
{
        if (y == 0)
            throw std::overflow_error("Divide by zero exception"); //@test (-1, 0)

        return a + b; //@test (2, 1) assert 2
}
```
