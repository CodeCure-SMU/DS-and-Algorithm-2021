import sys
import collections

N, M = map(int, sys.stdin.readline().split())

check_index = map(int, sys.stdin.readline().split())
que = collections.deque([i for i in range(1, N + 1)]) # 1 ~ N까지 값을 만듬
checks = [que[i - 1] for i in check_index] # 실제 값 추출

count = 0
for check in checks:
	index = que.index(check) # 위치 찾기
	while True:
		if que[0] == check: #첫번째일 경우
			que.popleft()
			break
		if index < len(que)/2:
			que.append(que.popleft())
		else:
			que.appendleft(que.pop())
		count += 1
print(count)
