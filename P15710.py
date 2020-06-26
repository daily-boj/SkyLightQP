a, b, n = map(int, input().split())
print(pow(2**31, n - 1, mod=1000000007))