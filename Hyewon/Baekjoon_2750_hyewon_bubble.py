def bubble(number) :
    for i in range(len(number)) :
        for j in range(len(number)) :
            if number[i] < number[j] :
                number[i], number[j] = number[j], number[i]
    return number


n = int(input())
number = []

for _ in range(n) : 
    number.append(int(input()))

number = bubble(number)
for i in number :
    print(i)
