import sys

num = int(sys.stdin.readline())
mylist = [] 

for i in range(num):
    num_two = int(sys.stdin.readline())
    mylist.append(num_two)

mylist.sort()

for i in mylist:
    print(i)
