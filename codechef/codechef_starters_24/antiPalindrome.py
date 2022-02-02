for _ in range(int(input())):
    n = int(input())
    s = input()
    if n % 2 != 0:
        print("NO")
    else:
        max = 0
        dict = {}
        for i in s:
            if i not in dict:
                dict[i] = 1
            else:
                dict[i] += 1
                if max < dict[i]:
                    max = dict[i]
        
        #print(max)
        if max > (n // 2):
            print("NO")
        else:
            print("YES")
            temp = ''
            for i,j in dict.items():
                temp += j*i
            a = temp[:(n//2)]
            b = temp[((n//2)):]
            print(a+b[::-1])