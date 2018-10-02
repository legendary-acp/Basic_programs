(a,b,c)=[int(i) for i in input().split()]
if(a+b>c and a+c>b and b+c>a):
    print("Yes! It's a triangle :)")
else:
    print("No! these sides can't make a triangle :(")
