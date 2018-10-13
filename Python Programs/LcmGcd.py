from math import gcd
for x in range(int(input())):
    (a,b)=[int(m) for m in input().split()]
    k=gcd(a,b)
    lcm =(a*b//k)
    print(k,lcm)
