import heapq
import sys
input = sys.stdin.readline
from collections import deque

INF = int(1e9)
N, E = map(int, input().split())

graph = [[] for _ in range(N+1)]
for _ in range(E):
    s, e, c = map(int, input().split())

    graph[s].append([e, c])
    graph[e].append([s, c])

m1, m2 = map(int, input().split())

def dijkstra(start):
    stack = []
    heapq.heappush(stack, [0, start])


    dist = [INF for _ in range(N+1)]
    dist[start] = 0
    while stack:
        cost, node = heapq.heappop(stack)
        for to, w in graph[node]:
            tmp = w + cost
            if dist[to] > tmp:
                dist[to] = tmp
                heapq.heappush(stack, [tmp, to])
    return dist

first_list = dijkstra(1)
m1_list = dijkstra(m1)
m2_list = dijkstra(m2)

res = min(first_list[m1] + m1_list[m2] + m2_list[N], 
          first_list[m2] + m2_list[m1] +m1_list[N])
if res >= INF:
    res = -1

print(res)

'''
4 6
1 2 3
2 3 3
3 4 1
1 3 5
2 4 5
1 4 4
2 3
'''