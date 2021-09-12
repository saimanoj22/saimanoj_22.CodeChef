for _ in range(int(input())):
    n = int(input())
    total_time = 0
    words = {}
    for i in range(n):
        temp = input()
        if temp in words:
            total_time += words[temp] / 2;
        else:
            time = 2
            for j in range(1, len(temp)):
                if temp[j] == 'd' or temp[j] == 'f':
                    if temp[j-1] == 'j' or temp[j-1] == 'k':
                        time += 2
                    else:
                        time += 4
                else:
                    if temp[j-1] == 'd' or temp[j-1] == 'f':
                        time += 2
                    else:
                        time += 4
            words[temp] = time
            total_time += time
    print(int(total_time))