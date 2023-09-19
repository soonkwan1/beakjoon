import sys
input = sys.stdin.readline

M = int(input())

s = set()
for i in range(M):
    line = input().strip().split()
    if len(line) == 2:
        line[1] = int(line[1])
        if line[0] == 'add':
            s.add(line[1])
        elif line[0] == 'remove':
            s.discard(line[1])
        elif line[0] == 'check':
            print("1") if line[1] in s else print("0")
        elif line[0] == 'toggle':
            if line[1] in s:
                s.discard(line[1])
            else:
                s.add(line[1])
    else:
        if line[0] == 'all':
            s = set([i for i in range(1, 21)])
        elif line[0] == 'empty':
            s = set()