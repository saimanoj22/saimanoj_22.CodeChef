
for _ in range(int(input())):
    n = int(input())
    finalList = []
    for i in range(n):
        temp = []
        temp = list(map(str, input().split()))
        temp.append(i)
        finalList.append(temp)
    finalList = sorted(finalList, key = lambda x:x[1], reverse=True)
    for i in range(len(finalList)-1):
        if finalList[i][1] == finalList[i+1][1]:
            if finalList[i][3] > finalList[i+1][3]:
                temp = finalList[i+1]
                finalList[i+1] = finalList[i]
                finalList[i] = temp
    for i in range(len(finalList)):
        print(finalList[i][0], finalList[i][1], finalList[i][2])