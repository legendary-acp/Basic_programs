# Programe to find divisors of a given nomber
from math import *
n=int(input())
for i in range(1,int(sqrt(n))+1):
  if(n%i==0):
    if(i==n/i):
      print(i)
    else:
      print(i,int(n/i))
