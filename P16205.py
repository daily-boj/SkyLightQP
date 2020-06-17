type, str = map(str, input().split(' '))

if type == "1":
    print(str)
    for s in range(len(str)):
        if s != 0 and str[s].isupper():
            print("_", end='')
            print(str[s].lower(), end='')
        else:
            print(str[s], end='')
    print()
    new = str[0].upper() + str[1::]
    print(new)
elif type == "2":
    for s in range(len(str)):
        if str[s] == "_":
            continue
        if str[s - 1] == "_":
            print(str[s].upper(), end='')
        else:
            print(str[s], end='')
    print()
    print(str)
    for s in range(len(str)):
        if s == 0:
            print(str[s].upper(), end='')
        else:
            if str[s] == "_":
                continue
            elif str[s-1] == "_":
                print(str[s].upper(), end='')
            else:
                print(str[s], end='')
elif type == "3":
    new = str[0].lower() + str[1::]
    print(new)
    for s in range(len(str)):
        if s == 0:
            print(str[s].lower(), end='')
        elif str[s].isupper():
            print("_", end='')
            print(str[s].lower(), end='')
        else:
            print(str[s], end='')
    print()
    print(str)
