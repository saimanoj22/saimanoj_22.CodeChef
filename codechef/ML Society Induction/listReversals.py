li = list(map(int, input().split()))
for i in range(len(li)):
    if (i+1) % 2 != 0:
        li[i] += 2
print(li[::-1])