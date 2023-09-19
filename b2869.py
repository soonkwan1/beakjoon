import sys
import math
input = sys.stdin.readline

up, down, height = map(int, input().split())


### 수열을 사용
# def func(n):
#     return up + (up - down) * (n - 1)

# gap = up - down
# start = 0
# end = height // gap
# while start <= end:
#     mid = (start + end) // 2
#     if func(mid) >= height:
#         print(mid)
#         break
#     start = mid

### BRUTE FORCE
# day = 1
# while True:
#     height -= up
#     if height < 0:
#         break
#     day += 1
#     height += down
# print(day)

### Another Idea
# cnt = 0
# if height - up <= 0:
#     cnt = 1
# elif height - up + down <= up:
#     cnt = 2


### Internet Answer
day = (height - down - 1) / (up - down) + 1
print(int(day))