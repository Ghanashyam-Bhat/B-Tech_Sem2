ln = []
lc = []
def win(l):
    if   ((1,1) in l and (2,2) in l and (3,3) in l):
        return 'w'
    elif ((3,1) in l and (2,2) in l and (1,3) in l):
        return 'w'
    elif ((1,1) in l and (1,2) in l and (1,3) in l):
        return 'w'
    elif ((2,1) in l and (2,2) in l and (2,3) in l):
        return 'w'
    elif ((3,1) in l and (3,2) in l and (3,3) in l):
        return 'w'
    elif ((1,1) in l and (2,1) in l and (3,1) in l):
        return 'w'
    elif ((1,2) in l and (2,2) in l and (3,2) in l):
        return 'w'
    elif ((1,3) in l and (2,3) in l and (3,3) in l):
        return 'w'
    else :
        return 'l'
for i in range(9):
    n = tuple(map(int,list(input().split(" "))))
    if i%2 == 0 :
        lc.append(n)
        z = win(lc)
        if z == 'w':
            print("Cross wins")
            break
    else :
        ln.append(n)
        z = win(ln)
        if z == 'w':
            print("Knot wins")
            break
else :
    print("Game Draw")