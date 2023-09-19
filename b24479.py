import sys
input = sys.stdin.readline

N, M, R = map(int, input().split())



def dfs(g, start):
    visit = []
    visit_idx = [0] * (N+1)
    visit_cnt = 1
    stack = [start]

    while stack:
        node = stack.pop()
        if node in visit:
            continue
        visit.append(node)

        visit_idx[node] = visit_cnt
        visit_cnt += 1

        stack.extend(g[node])
    
    print("\n".join(str(visit_idx[i]) for i in range(1, N+1)))
    
graph = [ [] * (N+1)]
for _ in range(M):
    s, e = map(int, input().split())
    graph[s].append(e)
    graph[e].append(s)

for i in range(1, N+1):
    graph[i].sort()

dfs(graph, R)