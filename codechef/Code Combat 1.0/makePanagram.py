for _ in range(int(input())):
    capital = set(list(map(chr, range(65, 91))))
    small = set(list(map(chr, range(97, 123))))
    s = input()
    s = set(list(s))
    final = sorted(list(capital - s) + list(small - s))
    if len(final) == 0:
        print('YES')
    else:
        print('NO')
        print(*final)
    