def dict_print(num, listno):
    dic = {}
    while num > 0:
        name = list(map(str,input().split()))
        #print(name)
        value = name[len(name) - 1].lower()
        #print(value)
        if not value in dic:
            dic[value] = 1
        else:
            dic[value] += 1
        num -= 1
    print("List ",listno,":", sep="")
    for key, value in sorted(dic.items()):
        print(key,"|",value)

no = 0  
while True:
    temp = int(input())
    if temp == 0:
        break
    else:
        no += 1
        dict_print(temp, no)
