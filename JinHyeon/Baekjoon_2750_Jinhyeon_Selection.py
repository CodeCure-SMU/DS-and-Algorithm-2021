count = int(input())

num = [int(input()) for _ in range(count)]

for i in range(len(num)):
    k = min(num[i:len(num)])
    num.insert(num.index(k), num.pop(i))
    num.insert(i, num.pop(num.index(k)))

for i in num:
    print(i)