amount = int(input())

line = 1
subspace = 1
for i in range(1, amount+1):
    space = amount - i
    print(" " * space + "*", end="")
    line += 1
    if line > 2:
        print(" " * subspace + "*", end="")
        subspace += 2
    print()

