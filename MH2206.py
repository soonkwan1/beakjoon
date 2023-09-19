def gcd(n1, n2):
    while n1 != n2:
        if n2 > n1:
            n2 -= n1
        else:
            n1 -= n2
    return n1

T = int(input())

result = []
for t in range(1, T+1):
    n = int(input())
    l = list(map(int, input().split()))
    
    dp = [[0 for _ in range(n)] for _ in range(2)]

    dp[0][1] = gcd(l[0], l[1])
    dp[1][1] = max(l[0], l[1])
    
    for i in range(2, n):
        dp[0][i] = gcd(dp[0][i-1], l[i])
        dp[1][i] = max(gcd(l[i], dp[1][i-1]), dp[0][i-1])
    print(dp[0])
    print(dp[1])

for i in range(len(result)):
    print("#{} {}".format(i+1, result[i]))

'''
2
3
7 6 10
3
1000000000 1000000000 1000000000
'''