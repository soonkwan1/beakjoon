import sys
import heapq
input = sys.stdin.readline
INF = int(1e9)

N, M = map(int, input().split())

graph = [[] for _ in range(N+1)]
l = []
for _ in range(M):
    s, e, c = map(int, input().split())
    l.append([s, e, c])

dist = [INF for _ in range(N+1)]


def dijkstra(start):
    stack = []
    dist[start] = 0
    

    for i in range(N):
        for j in range(M):
            curr_node = l[j][0]
            next_node = l[j][1]
            cost = l[j][2]

            if dist[curr_node] != INF and dist[curr_node] + cost < dist[next_node]:
                dist[next_node] = dist[curr_node] + cost
                if i == N-1:
                    return True

    return False

res = dijkstra(1)

if res:
    print(-1)
else:
    for i in range(2, N+1):
        if dist[i] == INF:
            print(-1)
        else:
            print(dist[i])

'''
3 4
1 2 4
1 3 3
2 3 -1
3 1 -2

4
3
'''