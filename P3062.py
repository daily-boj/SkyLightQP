for _ in range(int(input())):
    s = input()
    sum = str(int(s) + int(s[::-1]))
    if(sum == sum[::-1]): 
        print("YES")
    else:
        print("NO");