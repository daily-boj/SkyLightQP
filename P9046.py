for _ in range(int(input())):
    arr = {}
    for s in input():
        if s == " ":
            continue
        if s not in arr:
            arr[s] = 1
        else:
            arr[s] += 1
    arr = sorted(arr.items(), key=lambda x: x[1], reverse=True)
    dup = False
    for i in range(1, len(arr)):
        if arr[i][1] == arr[0][1]:
            dup = True
    print(arr[0][0]) if not dup else print("?")
