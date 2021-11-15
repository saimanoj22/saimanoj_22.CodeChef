for _ in range(int(input())):
    s = input()
    l = len(s)
    s1 = ''
    s2 = ''
    if l % 2 == 0:
        s1 = s[0:(l//2)]
        s2 = s[(l//2):l]
    else:
        s1 = s[0:(l//2)+1]
        s2 = s[(l//2)+1:l]
    if list(s1) == sorted(s1) and list(s2) == sorted(s2):
        print('PERFECT')
    else:
        print('NOT PERFECT')