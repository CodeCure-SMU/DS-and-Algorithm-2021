x, y = map(int, input().split())
card = sorted(list(map(int, input().split())))
ans = 0

for i in range(0, x-2):
    for j in range(i+1, x-1):
        for k in range(j+1, x):
            total = card[i] + card[j] + card[k]
            if total>y:
                break
            ans = max(total, ans)

print(ans)
