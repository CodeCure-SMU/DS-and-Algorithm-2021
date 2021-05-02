n, m = map(int, input().split())
cardNum = map(int, input().split())
cardNum = list(cardNum)
cardNum.sort()

final = 0

for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            if cardNum[i] + cardNum[j] + cardNum[k] > m:
                continue
            else:
                final = max(final, cardNum[i] + cardNum[j] + cardNum[k])

print(final)