import sys
import heapq
input = sys.stdin.readline
INF = int(1e9)

N = int(input())
M = int(input())

graph = [[] for _ in range(N+1)]
for _ in range(M):
    s, e, c = map(int, input().split())
    graph[s].append((e, c))
start, end = map(int, input().split())

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

print(dijkstra(start)[end])