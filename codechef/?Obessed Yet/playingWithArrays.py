n = int(input())
li = list(map(int,input().split()))
final = {}
for i in range(n):
    if li[i] in final:
        final[li[i]] = final[li[i]] + 1
    else:
        final[li[i]] = 1
count = 0
for key in final:
    if final[key] % 2 != 0:
        count = count + 1
print(count)