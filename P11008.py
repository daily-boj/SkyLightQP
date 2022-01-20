for _ in range(int(input())):
    s, p = input().split(' ')
    print(len(s) - (len(p) * s.count(p)) + s.count(p))
