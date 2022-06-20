# test: (2,0) assert Exception 
# test: (2,1) assert 2
def divider(x:int, y:int) -> float :
    if y == 0:
        raise Exception
    
    return x / y
