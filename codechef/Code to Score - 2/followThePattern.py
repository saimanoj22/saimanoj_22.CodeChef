n = int(input())
if n < 0:
    print('Not Possible! Program Aborted')
else:
    for i in range(n):
        print(' '*(n-i-1), end='')
        temp = 'Z'
        for j in range(i+1):
            print(temp,' ', end='', sep='')
            temp = chr(ord(temp) - 2)
        print()