s = input()
n = len(s)
max = 0
for length in range(0,n+1):
    temp = s[0:length]
    temp2 = temp
    temp3 = temp2[::-1]
    if temp == temp3:
        max = length
print(max)