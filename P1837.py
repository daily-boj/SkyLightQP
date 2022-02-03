P, K = map(int, input().split(' '))
m = 99999999999999
for i in range(2, K):
    if P % i == 0:
        m = min(m, i)
print("GOOD") if m == 99999999999999 else print(f"BAD {m}")
