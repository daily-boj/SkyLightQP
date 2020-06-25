while True:
    S = input().split()
    C = S[0]
    ss = str(S[1::]).lower()
    if C == "#":
        break
    result = 0
    for s in ss:
        if C in s:
            result += 1
    print("{} {}".format(C, result))
