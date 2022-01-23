count = 0
li = []
for _ in range(int(input())):
    item = input()
    li.append(item)
li = set(li)
print(len(li))