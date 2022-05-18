a = int(input()) 
for i in range(a): 
    l = list(map(str, input().split())) 
    res = eval(l[0])
    
    for j in range(len(l)):
        if l[j] == "@":
            res = res * 3
        elif l[j] == "%":
            res = res + 5
        elif l[j] == "#":
            res = res - 7
    print("%0.2f" %res)