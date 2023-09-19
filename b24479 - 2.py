"""
5 5 1
1 4
1 2
2 3
2 4
3 4
"""

import sys
input = sys.stdin.readline

N, M, R = map(int, input().split())
visit_node = [0 for _ in range(N+1)]
def dfs(g, start):
    visit = []
    stack = []
    stack.append(start)
    visit_cnt = 1
    
    while stack:
        node = stack.pop()
        if node not in visit:
            visit.append(node)
            visit_node[node] = visit_cnt
            visit_cnt += 1
            stack.extend(g[node])
    print("\n".join(str(visit_node[i]) for i in range(1, N+1)))

graph = {}
for _ in range(M):
    s, e = map(int, input().split())
    if s in graph:
        graph[s].append(e)
    else:
        graph[s] = [e]
        
    if e in graph:
        graph[e].append(s)
    else:
        graph[e] = [s]

for i in range(1, N+1):
    if i in graph:
        graph[i] = sorted(graph[i], reverse=True)

dfs(graph, R)