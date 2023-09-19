import sys
import heapq
input = sys.stdin.readline
INF = int(1e9)

N, M, X = map(int, input().split())
graph = [[] for _ in range(N+1)]

for _ in range(M):
    start, to, cost = map(int, input().split())
    graph[start].append((to, cost))

def dijkstra(start):
    stack = []
    heapq.heappush(stack, (0, start))
    dist[start] = 0


    while stack:
        cost, node = heapq.heappop(stack)
        if dist[node] < cost:
            continue
        for to, w in graph[node]:
            if dist[to] > w + cost:
                dist[to] = w + cost
                heapq.heappush(stack, (w+cost, to))
    return dist

result = [[]]
t = []

for i in range(1, N+1):
    dist = [INF for _ in range(N+1)]
    result.append(dijkstra(i))

for i in range(1, N+1):
    t.append(result[i][X] + result[X][i])

print(max(t))


# return_list = dijkstra(X)
# # print(return_list)

# m = -1
# for i in range(1, N+1):
#     if i == X:
#         continue
#     l = dijkstra(i)
#     res = l[X] + return_list[i]
#     # print(res)
#     m = max(m, res)
# print(m)
'''
4 8 2
1 2 4
1 3 2
1 4 7
2 1 1
2 3 5
3 1 2
3 4 4
4 2 3
'''