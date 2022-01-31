for _ in range(int(input())):
    a, b = input().split(' ')
    arr1 = [0 for _ in range(26)]
    arr2 = [0 for _ in range(26)]
    flag = False
    if len(a) != len(b):
        print(f'{a} & {b} are NOT anagrams.')
        continue
    for s in a:
        arr1[ord(s) - 97] += 1
    for s in b:
        arr2[ord(s) - 97] += 1
    for i in range(len(a)):
        if arr1[i] is not arr2[i]:
            print(f'{a} & {b} are NOT anagrams.')
            flag = True
            break
    if flag is False:
        print(f'{a} & {b} are anagrams.')
