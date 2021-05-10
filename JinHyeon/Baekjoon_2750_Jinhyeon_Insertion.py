count = int(input())

num = [int(input()) for _ in range(count)]

for i in range(len(num)-1):
    j = i
    while j >= 0:
        if num[j] > num[j + 1]:
            num.insert(j, num.pop(j+1))
        j -= 1

for i in num:
    print(i)