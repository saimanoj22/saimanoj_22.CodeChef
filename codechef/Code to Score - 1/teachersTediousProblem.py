finalList = []
for _ in range(int(input())):
    name, a, b, c = map(str, input().split())
    sum = int(a) + int(b) + int(c)
    temp = [name, sum, a, b, c]
    finalList.append(temp)
finalList = sorted(finalList, key = lambda x:x[1], reverse=True)
for i in range(len(finalList)-1):
    if finalList[i][1] == finalList[i+1][1]:
        if finalList[i][0] > finalList[i+1][0]:
            temp = finalList[i+1]
            finalList[i+1] = finalList[i]
            finalList[i] = temp
for li in finalList:
    li.pop(1)
    print(*li)