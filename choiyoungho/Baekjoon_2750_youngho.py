import sys

# 공통 input 받기
N = int(sys.stdin.readline())

result = []
for i in range(N):
	result.append(int(sys.stdin.readline()))

# 버블 정렬
for i in range(len(result) - 1):
	for j in range(i, len(result)):
		if result[i] > result[j]:
			result[i], result[j] = result[j], result[i]

# 선택 정렬
for i in range(len(result) - 1): # 처음부터 맨 마지막 전까지 돈다. 하나씩 고정.
	min_index = i
	for j in range(i + 1, len(result)): # 다음값부터 끝까지 찾는다.
		if result[min_index] > result[j]: # 더 작은 값이 나올 경우 
			min_index = j
	result[i], result[min_index] = result[min_index], result[i] # 최소값과 교환


# 삽입 정렬
for i in range(1, len(result)): # 1부터 끝까지
	for j in range(i, 0, -1): # 현재 위치에서 바로 하나씩 이전으로 이동
		if result[j - 1] > result[j]: # 작다면 교환
			result[j], result[j - 1] = result[j - 1], result[j]


# 퀵 정렬
def quick(arr, lo, hi):
	# 파티션을 재귀로 쪼개어감.
	def partition(lo, hi):
		# 가장 오른쪽을 파티션으로. 로무토 파티션
		pivot = arr[hi]
		left = lo
		# 왼쪽부터 오른쪽까지 스왑.
		# 피봇을 기준으로 작은값은 왼쪽으로 , 큰 값은 오른쪽으로
		for right in range(lo, hi):
			if arr[right] < pivot:
				arr[left], arr[right] = arr[right], arr[left]
				left += 1
		arr[left], arr[hi] = arr[hi], arr[left]
		return left
	
	# 탈출 조건. 
	if lo < hi:
		pivot = partition(lo, hi)
		quick(arr, lo, pivot - 1)
		quick(arr, pivot + 1, hi)

# 배열, 0, 맨끝을 lo, high로 
quick(result, 0, len(result) - 1)

# 결과값 출력
for i in result:
	print(i)
