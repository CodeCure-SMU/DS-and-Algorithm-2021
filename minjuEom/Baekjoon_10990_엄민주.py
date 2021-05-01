x = int(input())

for i in range(1, x+1):
    if i == 1:
        print(' ' * (x-i)+'*')
    else:
        print(' ' * (x-i)+'*'+' '*(i*2-3)+'*')
