def left(que):
    global step
    step += 1

    tmp = que.pop(0)
    que.append(tmp)


def right(que):
    global step
    step += 1

    tmp = [que.pop(-1)]
    tmp.extend(que)
    que = tmp

    return que

n, m = map(int, input().split())
index = list(map(int, input().split()))

step = 0

que = list(range(1, n + 1))

while index:
    if que[0] == index[0]:
        que.pop(0)
        index.pop(0)
    else:
        if que.index(index[0]) <= len(que) // 2:
            while que[0] != index[0]: left(que)
        else:
            while que[0] != index[0]: que = right(que)
print(step)