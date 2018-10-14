#Program to divide a rectangle in minimum number of square plots of equal size
from math import *
for i in range(int(input())):
    (x,y)=[int(p) for p in input().split()]
    side=gcd(x,y)
    print(x*y//side**2)
