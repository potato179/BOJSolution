h, m = input().split()
h = int(h)
m = int(m)    
if m < 45:
    m += 60
    h -= 1
    if h < 0:
        h = 23
print(h, m-45)