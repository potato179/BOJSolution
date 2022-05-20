input = int(input())
star = [[" "]*2*input for _ in range(input)]

def triangle(a, b, n):
    if n == 3:
        star[a][b] = "*"
        star[a+1][b-1] = "*"
        star[a+1][b+1] = "*"
        for i in range(-2, 3):
            star[a+2][b+i] = "*"
    else:
        triangle(a, b, n//2)
        triangle(a+n//2, b-n//2, n//2)
        triangle(a+n//2, b+n//2, n//2)

triangle(0, input-1, input)
for i in star:
    print("".join(i))