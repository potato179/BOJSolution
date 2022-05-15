a, b = map(int, input().split())
if a+b < 0 or a-b < 0 or (a+b)%2 != 0: print(-1)
else:
    x = (a+b)//2
    y = a-b
    print(max(x, y), min(x, y)) 