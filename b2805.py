import sys
input = sys.stdin.readline

n, m = map(int, input().split())
l = list(map(int, input().split()))

start = 1
end = max(l)

while start<=end:
    mid = (start + end) // 2
    k = [0 if l[i] - mid <= 0 else l[i] - mid for i in range(len(l))]
    cutted_sum = sum(k)
    if cutted_sum >= m:
        start = mid+1
    else:
        end = mid-1

print(end)