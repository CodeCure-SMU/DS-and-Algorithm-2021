import sys

n, k = map(int, sys.stdin.readline().split())
p = list(range(1, n+1))
final = []
i = k - 1

while True:
    final.append(p.pop(i))
    if not p:
        break
    i = (i + k - 1) % len(p)

print("<"+", ".join(map(str, final))+">")