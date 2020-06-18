a = [0 for _ in range(32)]
for i in range(28):
    a[int(input())] = True
for i in range(1, 31):
    if not a[i]:
        print(i)
