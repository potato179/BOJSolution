input(x, y)
month = 1, day = 1, cnt = 1;
while month = 1 || dat < y:
    if month == 1 || month = 3 || month = 5 || month = 7 || month = 8 || month = 10 || month = 12:
        if day == 31:
            day = 0
            month += 1
    elif month == 2:
        if day == 28:
            day = 0
            month += 1
    else:
        if day == 30:
            day = 0
            month += 1
    cnt += 1
    day += 1

if cnt%7 == 1:
    print("MON")
elif cnt%7 == 2:
    print("TUE")
elif cnt%7 == 3:
    print("WED")
elif cnt%7 == 4:
    print("THU")
elif cnt%7 == 5:
    print("FRI")
elif cnt%7 == 6:
    print("SAT")
elif cnt%7 == 0:
    print("SUN")