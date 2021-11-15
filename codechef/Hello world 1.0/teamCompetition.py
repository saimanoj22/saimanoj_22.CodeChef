for _ in range(int(input())):
    s = input()
    a = 0
    b = 0
    c = 0
    d = 0
    for i in s:
        if i == 'A':
            a += 1
        if i == 'B':
            b += 1
        if i == 'C':
            c += 1
        if i == 'D':
            d += 1
    maxi = max(a,b,c,d)
    if maxi == a:
        print('A ',end='')
    if maxi == b:
        print('B ',end='')
    if maxi == c:
        print('C ',end='')
    if maxi == d:
        print('D',end='')
    print()