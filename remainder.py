#Storing and displaying the remainders
storage = []
d = dict()

def validity(x,d,m,y):
	if d>=1 and d<=x:
		i = 0
	else :
		i = 1
	return i
    
def date(d,m,y):
	if m>12 :
		z = 1
	elif m != 2 :
		if m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12 :
			z = validity(31,d,m,y)
		else :
			z = validity(30,d,m,y)
	else :
		if y%100 == 0 :
			if y%400 == 0:
				z = validity(29,d,m,y)
			else :
				z = validity(28,d,m,y)
		elif y %4 == 0 :
			z = validity(29,d,m,y)
		else :
			z = validity(28,d,m,y)
	return z
    
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
        return "Monday"
    elif remainder == 2:
        return "Tuesday"
    elif remainder == 3:
        return "Wednesday"
    elif remainder == 4:
        return "Thursday"
    elif remainder == 5:
        return "Friday"
    elif remainder == 6:
        return "Saturday" 
    elif remainder == 0:
        return "Sunday"
       
def memory(dd , mm ,yy):
    dd,mm,yy= int(dd),int(mm),int(yy)
    global storage
    global d
    r = ''
    if f"{dd}/{mm}/{yy}" not in storage :
        d[f"{dd}/{mm}/{yy}"] = []
        storage.append(f"{dd}/{mm}/{yy}")
    print(f"\nEnter your remainders for {dd}/{mm}/{yy}")
    print("Enter 'exit' to close\n")
    while True:
        r = input("> ")
        if r.lower() == 'exit':
            break
        d[f"{dd}/{mm}/{yy}"].append(r)
    
print("""
    Press the following key 
    1 - To know the day of the date
    2 - To enter the remainders
    3 - To display the saved remainders
    close - To close the window
    """)
while True:
    k = input("\nEnter the key\n>> ")
    if (k=='1' or k=='2' or k=='3'):
        y = list(map(int,input("Enter the date (dd/mm/yy )\n").lower().split("/")))
        if date(y[0],y[1],y[2]):
            print("Invalid Date")
        elif k == '1':
            print("\nThe day of the entered date is:")
            print(date_to_day(y[0],y[1],y[2]))
        elif k == '2':
            memory(y[0],y[1],y[2])
        elif k == '3':
            if f"{y[0]}/{y[1]}/{y[2]}" in storage:
                print(f"""
    Date - {y[0]}/{y[1]}/{y[2]}
    Day - {date_to_day(y[0],y[1],y[2])}
        
    Remainders :""")
                x = 1
                for i in d[f"{y[0]}/{y[1]}/{y[2]}"] :
                    print(f"    {x}.{i}")
                    x +=1
                
            else:
                print(f"""
    Date - {y[0]}/{y[1]}/{y[2]}
    Day - {date_to_day(y[0],y[1],y[2])}
            
    No remainders""")
    elif k == "close" :
        print("Thank You")
        break
    else:
        print("Invalid Key")