for _ in range(int(input())):
    n = int(input())
    li = list(map(int, input().split()))
    freq = {}
    for ele in li:
        if ele in freq:
            freq[ele] += 1
        else:
            freq[ele] = 1
    for key, values in freq.items():
        if values > (n // 2):
            flag = key
            break
        else:
            flag = -1
    print(flag)