n = int(input())
nbi = "{0:b}".format(int(n))
ansbi = ''
for i in nbi:
    if i == '1':
        ansbi += '0'
    else:
        ansbi += '1'
print(int(ansbi, 2))
