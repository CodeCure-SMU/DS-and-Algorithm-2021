import sys
T = int(sys.stdin.readline())
dic = {")" : "("}

for i in range(T):
	ps = sys.stdin.readline().strip('\n') # (())())
	def check():
		stack = []
		for p in ps: # 처음부터 끝까지 돌기
			if p not in dic: # ')' 이 아니면, 스택에 넣기 ]
				stack.append(p) # stack['('] 여는 괄호를 넣어놓음
			elif not stack or dic[p] != stack.pop(): # ')' 다는 괄호를 기준으로 조회하여 '('를 꺼냄. / 스택에서 괄호를 꺼냄.
				return False
		return len(stack) == 0 # 남는게 없어야함.

	if check():
		print("YES")
	else:
		print("NO")
