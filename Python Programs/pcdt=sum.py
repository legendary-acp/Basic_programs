#To find no. of subarrays in an array whose product of element is equal to the sum of elements
for x in range(int(input())):
    n=int(input())
    a=[int(m) for m in input().split()]
    c=0
    for i in range(n):
        sum=0
        pcdt=1
        for j in range(i,n):
            sum+=a[j]
            pcdt*=a[j]
            if(sum==pcdt):
                c+=1
    print(c)
