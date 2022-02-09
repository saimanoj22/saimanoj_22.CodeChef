for _ in range(int(input())):
    n = int(input())
    x, y = [], []
    for i in range(n):
        a, b = map(int, input().split())
        x.append(a);
        y.append(b);
    print(len(set(x)) + len(set(y)))