C, K, P = map(int, input().split(' '))
sum = 0
for i in range(C):
    sum += K * (i+1) + P * pow(i+1, 2)
print(sum)
