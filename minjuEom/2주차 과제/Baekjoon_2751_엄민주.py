import sys

n = int(sys.stdin.readline())
num = []
for i in range(n):
    a = int(sys.stdin.readline())
    num.append(a)

num.sort()

for i in range(n):
    print(num[i])
