a = int(input())
k = a
n = 0
while not 10*round(a/2) + a%10 + round(a/2) == k:
    a = 10*round(a/2) + a%10 + round(a/2)
    n += 1
print(n)