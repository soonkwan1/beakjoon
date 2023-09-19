arr= []
def dp_fibo(n):
    arr.append(1)
    arr.append(1)
    for i in range(2, n):
        arr.append(arr[i-2] + arr[i-1])


N = int(input())
dp_fibo(N)
print("{0} {1}".format(arr[N-1],N-2))