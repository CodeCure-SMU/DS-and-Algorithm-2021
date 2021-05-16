import sys


n = int(sys.stdin.readline())
m = sys.stdin.readline().rstrip()
num = []
for _ in range(n):
    num.append(int(sys.stdin.readline()))

tmp = []
res = 0

for i in m:
    if 'A' <= i <= 'Z':
        tmp.append(num[ord(i)-ord('A')])
    else:
        a = tmp.pop()
        b = tmp.pop()

        if i == '+':
            res = b + a
        elif i == '-':
            res = b - a
        elif i == '*':
            res = b * a
        else:
            res = b / a

        tmp.append(res)


print('%.2f' % res)
