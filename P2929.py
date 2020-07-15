S = input()
result = 0
for i in range(len(S)):
    if S[i].isupper():
        while (i + result) % 4 != 0:
            result += 1
print(result)
