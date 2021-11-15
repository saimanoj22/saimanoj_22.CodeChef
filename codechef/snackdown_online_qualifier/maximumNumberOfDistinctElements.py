for i in range(int(input())):
    n = int(input())
    li = list(map(int,input().split()))
    sli = []
    for j in range(n):
        temp = [li[j], j]
        sli.append(temp)
    sli = sorted(sli, key= lambda x : x[0])
    temp = 0
    for j in  range(n):
        if sli[j][0] > temp:
            sli[j][0] = temp
            temp += 1
        elif sli[j][0] == temp:
            sli[j][0] = temp
    sli = sorted(sli, key=lambda x : x[1])
    for sub in sli:
        print(sub[0],' ', sep='',end='')
    print()