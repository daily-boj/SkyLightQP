while True:
    a, b = map(int, input().split(' '))
    if a == 0 and b == 0:
        break
    cnt = 0; carry = 0
    while True:
        if a <= 0 and b <= 0:
            break
        if (a % 10) + (b % 10) + carry >= 10:
            cnt += 1
            carry = 1
        else:
            carry = 0
        a //= 10
        b //= 10
    print(cnt)
