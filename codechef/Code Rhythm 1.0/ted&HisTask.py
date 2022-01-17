# partial
def decimalToBinary(n):
    return "{0:b}".format(int(n))

for _ in range(int(input())):
    l, r = map(int, input().split())
    count = 0
    for i in range(l, r+1):
        binary = decimalToBinary(i)
        if(binary.count('0') == 3):
            count += 1
    print(count)