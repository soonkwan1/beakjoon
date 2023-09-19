import sys
import heapq
input = sys.stdin.readline

V, E = map(int, input().split())
INF = int(1e9)

graph = [[] for _ in range(V+1)]
for _ in range(E):
    s, e, c = map(int, input().split())
    graph[s].append([e, c])

def dijkstra(start):
    stack = []
    heapq.heappush(stack, [0, start])

    dist = [INF for _ in range(V+1)]
    dist[start] = 0
    while stack:
        cnt, node = heapq.heappop(stack)
        
        for to, weight in graph[node]:
            cost = cnt + weight
            if dist[to] > cost:
                dist[to] = cost
                heapq.heappush(stack, [cost, to])
    return dist

result = []
for i in range(1, V+1):
    result.append(dijkstra(i)[1:])

res = INF
for i in range(V):
    for j in range(V):
        if i != j and result[i][j] + result[j][i] < res:
            res = result[i][j] + result[j][i]
print(res)


'''
3 4
1 2 1
3 2 1
1 3 5
2 3 2
'''