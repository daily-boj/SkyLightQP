for _ in range(int(input())):
    N = input()
    result = 0
    while True:
        if N == "6174":
            print(result)
            break
        b = ''.join(sorted(N))
        a = ''.join(sorted(N, reverse=True))
        sub = str(int(a) - int(b))
        sub += "0" * (4 - len(sub))
        N = sub
        result += 1
