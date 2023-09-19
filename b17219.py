import sys
input = sys.stdin.readline

N, M = map(int, input().split())

site_password = {}

for _ in range(N):
    line = input().split()
    site_password[line[0]] = line[1]

for _ in range(M):
    site = input().strip()
    print(site_password[site])