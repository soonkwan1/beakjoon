import sys
input = sys.stdin.readline
from collections import deque

N, M = map(int, input().split())

ladder = {}
snake = {}
for _ in range(N):
    s, e = map(int, input().split())
    ladder[s] = e
for _ in range(M):
    s, e = map(int, input().split())
    snake[s] = e

table = [i for i in range(1, 101)]

queue = deque()
queue.append(1)
cost = [0 for _ in range(101)]


while queue:
    x = queue.popleft()

    for i in range(1, 7):
        nx = x + i
        if (nx in ladder) & (cost[ladder[nx]] == 0):
            cost[ladder[nx]] = cost[x] + 1
        elif (nx in snake) & (cost[ladder[nx]] == 0):
            cost[snake[nx]] = cost[x] + 1
        else:
            cost[nx] = cost[x] + 1
        