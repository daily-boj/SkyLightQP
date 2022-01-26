import math
for _ in range(int(input())):
    a, b = map(int,input().split(' ')); print(f'{math.lcm(a,b)} {math.gcd(a,b)}')