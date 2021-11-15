for _ in range(int(input())):
    time, adminu = map(str, input().split())
    adminu = int(adminu)
    hrs, minu = time.split(':')
    hrs = int(hrs)
    minu = int(minu)
    rhrs = hrs
    rminu = minu
    if minu != 0:
        temp = 60 - rminu
        adminu -= temp
        rhrs += 1
        rminu = 0
    rhrs += (adminu // 60)
    adminu -= (adminu // 60)*60
    rminu += adminu % 60
    if(rhrs > 24):
        rhrs -= (rhrs//24)*24
    if(rhrs == 24):
        rhrs = 0
    if(rminu == 60):
        rminu = 0
    print(f'{rhrs:02}:{rminu:02}')