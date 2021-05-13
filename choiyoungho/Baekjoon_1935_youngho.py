import sys
import string
import collections

N = int(sys.stdin.readline())

post = collections.deque(list(sys.stdin.readline().strip('\n')))

# print(post)

# ABC와 입력받은 값을 토대로 dict를 만듬
alphabet = list(string.ascii_uppercase)
table = collections.defaultdict(float)
for i in range(N):
	number = sys.stdin.readline()
	table[alphabet[i]] = float(number)

# print(table)
stack = []
calculate = ['*', '+', '/', '-']
while post: # 다 사라질떄까지
	# print(stack)
	v = post.popleft() # 스택에 추가
	if v in alphabet: # 알파벳일경우 스택에 추가
		stack.append(table[v]) # 테이블에 있는 값 추출
	else:
		tmp = stack.pop()
		if v == '*':
			stack.append(stack.pop() * tmp)
		elif v == '+':
			stack.append(stack.pop() + tmp)
		elif v == '/':
			stack.append(stack.pop() / tmp)
		elif v == '-':
			stack.append(stack.pop() - tmp)
print("{0:0.2f}".format(stack.pop()))
