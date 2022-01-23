import itertools
final = []
for _ in range(int(input())):
    n = int(input())
    li = list(map(int, input().split()))
    final.append(li)
final = list(itertools.chain.from_iterable(final))
final.sort()
print(*final,sep='->')