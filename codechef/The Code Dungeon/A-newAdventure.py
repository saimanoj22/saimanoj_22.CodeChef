for _ in range(int(input())):
    n,m = map(int,input().split())
    li1 = list(map(str, input().split()))
    li2 = list(map(str, input().split()))
    diff = set(li2) - set(li1)
    print(len(set(li2) - diff))