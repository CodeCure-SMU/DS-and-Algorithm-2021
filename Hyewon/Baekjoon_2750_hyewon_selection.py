number = int(input())
input_list = []

for _ in range(number):
    input_list.append(int(input()))

for i in range(len(input_list)):
    index = i
    for j in range(i+1,len(input_list)):
        if input_list[index] > input_list[j]:
            index = j
    input_list[i], input_list[index] = input_list[index], input_list[i]

for item in input_list:
    print(item)
