N = int(input()) - 1
if N % 8 == 0:
    print("1")
elif N % 8 == 1 or N % 8 == 7:
    print("2")
elif N % 8 == 2 or N % 8 == 6:
    print("3")
elif N % 8 == 3 or N % 8 == 5:
    print("4")
if N % 8 == 4:
    print("5")
