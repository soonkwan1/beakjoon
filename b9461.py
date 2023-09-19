def dp_fadoban(arr, n):
    arr.append(1)
    arr.append(1)
    arr.append(1)
    for i in range(3, n):
        arr.append(arr[i-2] + arr[i-3])

T = int(input())

for _ in range(T):
    n = int(input())
    arr = []
    dp_fadoban(arr, n)
    print(arr[n-1])