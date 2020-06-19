while True:
    try:
        n = int(input())
        num = set([])
        result = 0
        temp = n
        while len(num) < 10:
            for i in str(temp):
                num.add(i)
            result += 1
            temp = n * result
        print(result - 1)
    except EOFError:
        break
