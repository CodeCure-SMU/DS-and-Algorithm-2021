number = int(input())
input_list = []

for _ in range(number):
    input_list.append(int(input()))

for i in range(1,len(input_list)):
    for j in range(i,0,-1):
        if input_list[j] < input_list[j-1]:
            input_list[j], input_list[j-1] = input_list[j-1], input_list[j]

for item in input_list:
    print(item)
