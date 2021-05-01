import sys

j = int(input())
i=0
while i<j:
    a,b=map(int, sys.stdin.readline().split())
    print(a+b)
    i+=1
