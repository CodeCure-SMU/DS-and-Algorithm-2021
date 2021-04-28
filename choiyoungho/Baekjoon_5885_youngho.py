import sys

N = int(sys.stdin.readline()) # 1 <= N <= 100
for i in range(N):
	for j in range(N - i - 1): # 왼쪽 별
		print(" ", end='')
	print("*", end='')
	for j in range(i * 2 -1): # 오른쪽 별
		print(" ", end='')
	if i == 0: # 0일경우 별이 곂침. 
		print() # 엔터
		continue
	print("*")
