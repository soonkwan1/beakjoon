import sys
# sys.setrecursionlimit(10**6)
input = sys.stdin.readline

N = int(input())
table = [list(map(int, input().split())) for _ in range(N)]
cnt = 0

def dfs(state, x, y):
    global cnt
    if x == N-1 and y == N-1:
        cnt += 1
        return
    
    if state == 2 or state == 1:
        if x+1 < N and table[x+1][y] == 0:
            dfs(2, x+1, y)
    if state == 0 or state == 1:
        if y+1 < N and table[x][y+1] == 0:
            dfs(0, x, y+1)
    if x+1 < N and y+1 < N:
        if table[x][y+1] == 0 and table[x+1][y] == 0 and table[x+1][y+1] == 0:
            dfs(1, x+1, y+1)
dfs(0, 0, 1)
print(cnt)