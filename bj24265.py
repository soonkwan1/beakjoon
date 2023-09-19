# n = int(input())
# res = (n**3 - 3*n**2 + 2*n) // 6
# print(res, 3, sep='\n')

a1, a0 = map(int, input().split())
c = int(input())
n0 = int(input())

try:
    tmp = a0 / (c - a1)

    if n0 < tmp or a1 * n0 + a0 > c * n0:
        print(0)
    else:
        print(1)
except:
    if a0 <= 0:
        print(1)
    else:
        print(0)