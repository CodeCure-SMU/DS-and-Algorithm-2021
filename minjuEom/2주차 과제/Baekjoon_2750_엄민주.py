def bubble(num) :
    for i in range(len(num)):
        for j in range(len(num)):
            if num[i] < num[j]:
                num[i], num[j] = num[j], num[i]
    return num

x = int(input())
num = []

for _ in range(x):
    num.append(int(input()))

num = bubble(num)
for i in num :
    print(i)
