N = int(input())
wait = list(map(int, input().split()))
stack = []
now = 1
for w in wait:
    if now == w:
        now += 1
        while len(stack) > 0 and stack[-1] == now:
            stack.pop()
            now += 1
    else:
        stack.append(w)

size = len(stack)
for i in range(size):
    if now != stack[-1]:
        print("Sad")
        exit(0)
    else:
        stack.pop()
        now += 1

print("Nice")
