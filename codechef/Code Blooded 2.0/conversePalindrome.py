for _ in range(int(input())):
    n = int(input())
    li = list(map(chr, range(97, 123)))
    s = input()
    new = ''
    for i in range(len(s)):
        index = li.index(s[i])
        new += (li[-(index+1)])
    if(s == new[::-1]):
        print('Yes')
    else:
        print('No')