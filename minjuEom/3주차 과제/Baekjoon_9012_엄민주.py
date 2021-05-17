n = int(input())
for i in range(n):
    m = list(input())
    x = 0
    for i in m:
        if i == "(":
            x += 1
        elif i == ")":
            x -= 1
        if x<0:
            print("NO")
            break

    if x == 0:
        print("YES")
    elif x>0:
        print("NO")
