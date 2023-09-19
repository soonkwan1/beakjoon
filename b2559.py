import sys
input = sys.stdin.readline

N, M = map(int, input().split())
l = [i for i in map(int, input().split())]

sum_list = [0]
number = 0
for i in range(N):
    number += l[i]
    sum_list.append(number)

ans = []
for i in range(M, N+1, 1):
    ans.append(sum_list[i] - sum_list[i - M])

print(max(ans))
