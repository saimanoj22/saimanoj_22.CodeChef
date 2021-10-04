for _ in range(int(input())):
    li = list(map(int,input().split()))
    arr = list(map(int,input().split()))
    dict = {}
    flag = 0
    for i in range(0, len(arr)):
        if li[1] - arr[i]in dict:
            print(dict[li[1] - arr[i]], i)
            flag = 1
        dict[arr[i]] = i
    if flag == 0:
        print(-1)