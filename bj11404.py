import sys
input = sys.stdin.readline

city = int(input())
bus = int(input())

matrix = [[1e9 for _ in range(city+1)] for _ in range(city+1)]

for i in range(city+1):
    matrix[i][i] = 0

for _ in range(bus):
    start, to, cost = map(int, input().split())
    if cost < matrix[start][to]:
        matrix[start][to] = cost

dist = [[1e9 for _ in range(city+1)] for _ in range(city+1)]
for k in range(1, city+1):
    for i in range(1, city+1):
        for j in range(1, city+1):
            if matrix[i][k] + matrix[k][j] < matrix[i][j]:
                matrix[i][j] = matrix[i][k] + matrix[k][j]

for i in range(1, city+1):
    for j in range(1, city+1):
        if matrix[i][j] == 1e9:
            print(0, end=' ')
        else:
            print(matrix[i][j], end=' ')
    print()