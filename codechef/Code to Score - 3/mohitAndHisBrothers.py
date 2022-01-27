s = input()
dict = {}
for i in s:
    if i not in dict:
        dict[i] = 1
    else:
        dict[i] += 1
x = 0
for i in dict.values():
    if i % 3 != 0:
        x += 1
if x > 0:
    print('NO')
else:
    print('YES')