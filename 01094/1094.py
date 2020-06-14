target = int(input())
shortStick = 64
longStick = 0
stickCNT = 0

def compare(short, total, cnt) :
    global target
    if short == target :
        return 1

    elif target > total: 
        short = short/2

        if (short + total) > target :
            return compare(short, total, cnt)
        
        elif (short + total) <= target :
            total += short
            cnt += 1
            return compare(short, total, cnt)
    
    elif target == total :
        return cnt

result = compare(shortStick, longStick, stickCNT)
print(result)
