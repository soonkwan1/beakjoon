d = {}

n = int(input())

for i in range(n//3+1):
    for j in range(n//3+1):
        num = 3*i + 5*j
        if num in d:
            if d[num] > i+j:
                d[num] = i+j
        else:
            d[num] = i+j

if n in d:
    print(d[n])
else:
    print(-1)