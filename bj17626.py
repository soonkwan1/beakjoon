N = int(input())
l = [0 for _ in range(50001)]

num = 1
while True:
    if num**2 > 50000:
        break
    l[num**2] = 1
    num += 1

for i in range(1, 50001):
    if l[i] != 0:
        continue

