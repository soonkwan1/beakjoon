import sys
input = sys.stdin.readline

V, E = map(int, input().split())
INF = int(1e9)
matrix = [[INF for _ in range(V+1)] for _ in range(V+1)]

for _ in range(E):
    s, e, c = map(int, input().split())
    matrix[s][e] = c

for i in range(1, V+1):
    for j in range(1, V+1):
        for k in range(1, V+1):
            if matrix[j][i] + matrix[i][k] < matrix[j][k]:
                matrix[j][k] = matrix[j][i] + matrix[i][k]


res = INF
for i in range(1, V):
    res = min(res, matrix[i][i])
res = -1 if res == INF else res
print(res)


# print()
# for i in range(1, V+1):
#     for j in range(1, V+1):
#         print(matrix[i][j],end = ' ')
#     print()

'''
3 4
1 2 1
3 2 1
1 3 5
2 3 2
'''