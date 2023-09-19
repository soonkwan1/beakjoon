import sys
import math
input = sys.stdin.readline

def func(n):
    return 3 * n ** 2 - 3 * n + 1

N = int(input())
l = [func(i) for i in range(1, int(math.sqrt(10**9))+1)]

for i in range(len(l)):
    if N <= l[i]:
        print(i+1)
        break