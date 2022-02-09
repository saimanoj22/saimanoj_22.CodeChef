n = int(input())
c = int(input())

for i in range(1,n+1):
    temp = 0
    if i % 3 != 0:
        temp = (i // 3) + 1
    else:
        temp = i // 3
    #print(temp)
    if temp % 2 == 0:
        c -= temp
    else:
        c += temp
print(c)