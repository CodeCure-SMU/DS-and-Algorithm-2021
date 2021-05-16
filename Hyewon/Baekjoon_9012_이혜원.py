a = int(input())
for i in range(a):
    b = input()
    arr = list(b)
    sum = 0
    for i in arr:
        if i == '(':
            sum += 1
        elif i == ')':
            sum -= 1
        if sum < 0:
            print('NO')
            break
    if sum > 0:
        print('NO')
    elif sum == 0:
        print('YES')
