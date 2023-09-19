n = int(input())
l = list(map(int, input().split()))

arr = []
arr.append(l[0])
for i in range(1, n):
    if arr[i-1] + l[i] > arr[i-1]:
        arr.append(arr[i-1] + l[i])
    else:
        arr.append(l[i])

print(max(arr))