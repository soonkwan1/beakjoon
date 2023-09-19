f = [1, 1]

for i in range(2, 501):
    f.append(f[i-1] * i)

N = int(input())
num = f[N]
cnt = 0
while True:
    if num % 10 != 0:
        break
    num = num // 10
    cnt += 1

print(cnt)