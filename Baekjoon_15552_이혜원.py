def star():
    n=int(input())
    star=' '*(n-1)+'*'
    print(star)        

    for i in range(1,n):
        star2=' '*(n-1-i)+'*'+' '*(i*2-1)+'*'
        print(star2)

if __name__ == "__main__":
    star()
