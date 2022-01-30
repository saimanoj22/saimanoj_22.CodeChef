def check(main, sub_split):
    ind = -1
    for word in sub_split:
        ind = main.find(word, ind+1)
        if ind == -1:
            return False
    return True


a = input()
b =  'hello'
if(check(a,b)):
    print('YES')
else:
    print('NO')