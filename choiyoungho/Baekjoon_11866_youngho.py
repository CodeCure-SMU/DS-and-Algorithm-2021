import sys

# input 
N, K = map(int, sys.stdin.readline().split())
people = [i for i in range(1, N + 1)] # 사람 배열 생성

index = 0
result = []
K -= 1 # 다음 증가되는 수는 3이 증가되나, 계속하여 1개를 전체 people의 숫자를 하나씩 줄이므로 -1 
while people:
    index += K
    if index >= len(people):
        index %= len(people)
    result.append(people.pop(index))
print("<{}>".format(str(result)[1:-1]))
