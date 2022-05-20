chicken = int(input())
cola, maekju = map(int, input().split())
print(min(chicken, cola//2+maekju))