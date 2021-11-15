for _ in range(int(input())):
    num = list(map(int, input().split()))
    n = num[0]
    m = num[1]
    li = list(range(1,n+1))
    i = 1
    while len(li) - m > 1:
        if i % 2 != 0:
            del li[0:m]
        elif i % 2 == 0:
            del li[-m:]
        i += 1
    if i % 2 != 0:
        print(li[len(li) - 1])
    elif i % 2 == 0:
        print(li[0])