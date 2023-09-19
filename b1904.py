arr = []
def dp_fibo(n):
    arr.append(1)
    arr.append(2)
    for i in range(2, n):
        arr.append((arr[i-1] + arr[i-2]) % 15746)
# 1 2 3 4 5 6  7  8 
# 1 2 3 5 8 13 21 34
n = int(input())
dp_fibo(n)
print(arr[n-1])