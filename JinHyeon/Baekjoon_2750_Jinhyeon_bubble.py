count = int(input())

num = [int(input()) for _ in range(count)]

for i in range(len(num)):
    for j in range(len(num)-1):
        if num[j] > num[j+1]:
            num.insert(j+1, num.pop(j))
        else:
            continue

print(num)