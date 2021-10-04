for i in range(int(input())):
    vertical = 'AMTUVWY'
    horizantal = 'BCDEK'
    vertihori = 'HIOX'
    li = []
    for j in range(int(input())):
        name = input()
        deciname = ''
        for letter in name:
            if letter in vertical:
                deciname += '0'
            elif letter in horizantal:
                deciname += '1'
            elif letter in vertihori:
                deciname += '10'
            else:
                deciname += '01'
        li.append(int(deciname,2))
    print(*li)