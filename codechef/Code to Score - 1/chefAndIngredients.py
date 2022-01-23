li = list(map(int, input().split()))
bal = li[4]
li.pop(4)
li = sorted(li)
sum, count = 0, 0
for i in li:
    sum += i
    if(sum > bal):
        break
    count += 1
print(count)