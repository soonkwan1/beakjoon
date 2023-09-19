import sys
input = sys.stdin.readline

N, M = map(int, input().split())
l = [i for i in map(int, input().split())]

sum_list = [0]

number = 0
for i in range(N):
    number += l[i]
    sum_list.append(number)

print_line = []
for _ in range(M):
    start, end = map(int, input().split())
    ans = sum_list[end] - sum_list[start-1]
    print_line.append(ans)

print("\n".join(str(i) for i in print_line))
