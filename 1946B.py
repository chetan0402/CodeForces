def solve():
    n,k=input().split(" ")
    n=int(n)
    k=int(k)
    arr=input().split(" ")

    highestSum=0
    for i in range(0,n):
        for ii in range(i,n):
            currentSum=0
            for j in range(i,ii+1):
                currentSum+=int(arr[j])
            if(currentSum>highestSum):
                highestSum=currentSum

    allSum=0
    for i in range(1,n):
        allSum+=int(arr[i])

    print((highestSum*((1<<k)-1)+allSum)%1000000007)

times=int(input())
for i in range(times):
    solve()