num = int(input())

for _ in range(num):
    text = input()
    stack = []
    final = 0

    for stackIndex in range(len(text)):
        stringa = text[stackIndex]

        if stringa == "(":
            stack.append(stringa)
        elif stringa == ")":
            if not stack:
                final += 1
                break
            else:
                stack.pop()
        else:
            continue
    if (len(stack) != 0) or final != 0:
        print("NO")
    else:
        print("YES")