def date_to_day(date, month, year):
    month_days = 0
    month_days_leap = 0
    for d in range(1, month):
        if d == 2:
            month_days += 28
        elif d % 2 == 1 and d <= 7:
            month_days += 31
        elif d % 2 == 0 and d < 7:
            month_days += 30
        elif d % 2 == 1 and d > 7:
            month_days += 30
        elif d % 2 == 0 and d > 7:
            month_days += 31
    if month > 2:
        month_days_leap += 1
    elif month < 2:
        month_days_leap = month_days

    total_leap = month_days_leap + date
    total_non_leap = month_days + date
    i = 1
    total = 0
    while i < year:
        if i % 100 != 0:
            if i % 4 == 0:
                total += 366
            elif i % 4 != 0:
                total += 365
        elif i % 100 == 0:
            if i % 400 == 0:
                total += 366
            elif i % 400 != 0:
                total += 365
        i += 1
    final_leap = total + total_leap
    final_non_leap = total + total_non_leap
    if year % 100 != 0:
        if year % 4 == 0:
            remainder = final_leap % 7
        elif year % 4 != 0:
            remainder = final_non_leap % 7
    elif year % 100 == 0:
        if year % 400 != 0:
            remainder = final_non_leap % 7
        elif year % 400 == 0:
            remainder= final_leap % 7
    if remainder == 1:
        print("Monday")
    elif remainder == 2:
        print("Tuesday")
    elif remainder == 3:
        print("Wednesday")
    elif remainder == 4:
        print("thursday")
    elif remainder == 5:
        print("Friday")
    elif remainder == 6:
        print("Saturday")
    elif remainder == 0:
        print("Sunday")