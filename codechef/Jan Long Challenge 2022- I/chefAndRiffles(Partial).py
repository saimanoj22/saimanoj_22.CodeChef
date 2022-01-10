import math

for _ in range(int(input())):
    n, k = map(int, input().split())
    factor = math.log(n,2)
    times = k % factor
    li = list(range(1,n+1))
    count = 0
    #print('List:', li)
    while(count < times):
        even = []
        odd = []
        for i in range(len(li)):
            if i % 2 != 0:
                even.append(li[i])
            else:
                odd.append(li[i])
        #print(odd, even)
        li = odd + even
        count += 1
    print(*li)
