import re
for _ in range(int(input())):
    length = int(input())
    string = list(re.compile('\.*').sub('', input()))
    if string == ['H','T']*(len(string) // 2):
        print('Valid')
    else:
        print('Invalid')