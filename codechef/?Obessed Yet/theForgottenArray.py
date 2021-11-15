n = int(input())
li = list(map(int, input().split()))
index = list(map(int, input().split()))
fli = []
for i in range(n):
    temp = [li[i],index[i]]
    fli.append(temp)
fli = sorted(fli, key=lambda x:x[1])
for i in range(n):
    print(fli[i][0], end=" ")