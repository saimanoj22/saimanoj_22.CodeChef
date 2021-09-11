# cook your dish here
for _ in range(int(input())):
    n = int(input())
    flag = 0
    strip = list(map(int,input().split()))
    if n % 2 == 0:
        print('no')
    else:
        for i in range(len(strip)):
            if i < (n+1)/2:
                if i == strip[i-1]:
                    #print(i, strip[i-1])
                    flag += 1
            else:
                if n-i+1 == strip[i-1]:
                    #print(n-i+1, strip[i-1])
                    flag += 1
        if flag == n - 1:
            print('yes')
        else:
            print('no')