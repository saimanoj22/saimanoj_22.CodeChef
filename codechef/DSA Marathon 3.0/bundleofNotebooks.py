n = int(input())
li = list(map(int, input().split()))
final = []
for i in range(1,len(li)+1):
    temp = []
    temp.append(i)
    temp.append(li[i-1])
    final.append(temp)
final = sorted(final, key=lambda x:x[1])
start = 0
end = len(final)-1
while start < len(final) //2 :
    print(final[start][0],final[end][0])
    start += 1
    end -= 1
