case = 0
while True:
    A = input()
    B = input()
    case += 1
    if A == "END" and B == "END":
        break
    A = sorted(A)
    B = sorted(B)
    if A == B:
        print("Case {}: same".format(case))
    else:
        print("Case {}: different".format(case))
