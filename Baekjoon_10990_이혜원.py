import sys

sum = int(input())
for i in range(sum):
    A, B = map(int, sys.stdin.readline().rstrip().split())
    print(A+B)
