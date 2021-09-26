for _ in range(int(input())):
    n = input()
    if int(n[0]) + int(n[len(n) - 1]) >= 5:
        print("Yes")
    else:
        print("No")