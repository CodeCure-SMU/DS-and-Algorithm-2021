number = int(input())
input_list = []

for _ in range(number):
    input_list.append(int(input()))

def quick_sort(lst):
    if len(lst) <= 1:
        return lst
    pivot = lst[0]
    left, right = [], []
    for item in lst[1:]:
        if item < pivot: left.append(item)
        else: right.append(item)
    return quick_sort(left) + [pivot] + quick_sort(right)

input_list = quick_sort(input_list)

for item in input_list:
    print(item)
