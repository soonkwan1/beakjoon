T = int(input())

table = [ [0 for _ in range(15)] for _ in range(15) ]
table[0] = [i+1 for i in range(15)]
for i in range(15):
    table[i][0] = 1
for i in range(1, 15):
    for j in range(1, 15):
        table[i][j] = table[i][j-1] + table[i-1][j]

for _ in range(T):
    k = int(input())
    n = int(input())
    print(table[k][n-1])

