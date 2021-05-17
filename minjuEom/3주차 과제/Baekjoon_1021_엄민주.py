import sys
from collections import deque
input = sys.stdin.readline

N1,N2 = map(int, input().split())
Exs = list(map(int, input().split()))

li = deque()
cnt = 0
for i in range(1,N1+1):
    li.append(i)

for i in Exs:
    while 1:
        if li[0] == i:
            li.popleft()
            break
        else:
            if li.index(i) <= len(li)//2:
                li.rotate(-1)
                cnt += 1
            else:
                li.rotate(1)
                cnt += 1
print(cnt)
