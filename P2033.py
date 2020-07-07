N = int(input())
temp = 10
while N > temp:
    N += (temp/10) * 5
    N -= N % temp
    temp *= 10
print("%.0f" % N)
