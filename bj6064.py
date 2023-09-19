import sys
input = sys.stdin.readline

T = int(input())

for _ in range(T):
    M, N, x, y = map(int, input().strip().split())
    
    if x <= N:
        start = x
    else:
        start = x - N
    
    visit = []
    # 답을 N으로 나눈 나머지가 y
    while y not in visit:
        if start not in visit:
            visit.append(start)
            start = start + (M-N)
            if start > N:
                start = start - N
            elif start <= 0:
                start = N + start
        else:
            break
    
    # print(visit)
    flag = -1
    for i in range(len(visit)):
        if visit[i] == y:
            flag = i
    if flag == -1:
        print(-1)
    else:
        print(x + M * flag)
    