n = int(input())
f = set(map(int, input().split()))
s = set(range(1, n + 1))
print(*(s - f))