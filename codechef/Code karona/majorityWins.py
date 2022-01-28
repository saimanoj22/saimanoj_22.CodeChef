for _ in range(int(input())):
    n = int(input())
    li = list(map(int, input().split()))
    dict = {}
    for i in li:
        if i not in dict:
            dict[i] = 1
        else:
            dict[i] += 1

    count = 0
    for i,j in dict.items():
        if j > n//2:
            print(i)
            count += 1
    if count == 0:
        print('NOTA')