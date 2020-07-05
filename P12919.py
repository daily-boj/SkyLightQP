S = input()
T = input()


def solve(t):
    if len(t) == len(S):
        return t == S
    if t[-1] == "A" and solve(t[:-1]):
        return True
    if t[0] == "B":
        rev = t[::-1]
        return solve(rev[:-1])
    else:
        return False


print(1 if solve(T) else 0)
