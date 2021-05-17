from collections import deque
import sys
input = sys.stdin.readline

N,K = map(int,(input().split()))

d = deque([])
li = []
for i in range(1,int(N)+1):
    d.append(i)

while len(d)>0:
    for i in range(1, K+1):
        if i % K == 0:
            li.append(d.popleft())
        else:
            d.append(d.popleft())

print(str(li).replace('[','<').replace(']','>'))
