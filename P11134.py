import math
for _ in range(int(input())):
    n, c = map(int, input().split(' '))
    print(math.ceil(n / c))
