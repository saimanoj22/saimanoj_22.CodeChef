testcases = int(input())
while testcases > 0 :
    n, k = input().split()
    k = int(k)
    temp = int(k)
    count = 0
    str = []
    str = input().split()
    scores = [int(i) for i in str]
    scores.sort(reverse=True)
    for i in range(len(scores)):
        if scores[i] >= scores[k-1]:
            count += 1
    print(count)
    testcases -= 1