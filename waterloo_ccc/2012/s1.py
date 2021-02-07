import math

def nCr(n)->int:
    n-=1
    if n>2:
        return math.factorial(n)/(math.factorial(n-3)*math.factorial(3))
    else:
        return 0

j = int(input())
print(nCr(j))
