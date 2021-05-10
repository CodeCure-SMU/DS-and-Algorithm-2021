num = int(input(""))
mylist = list()  #mylist라는 리스트 만들기

for i in range(num):
    mylist.append(int(input()))

mylist.sort()

for i in mylist:
    print(i)


