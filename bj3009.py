x_dict = {}
y_dict = {}
for _ in range(3):
    x, y = map(int, input().split())
    if x in x_dict:
        x_dict[x] += 1
    else:
        x_dict[x] = 1
    if y in y_dict:
        y_dict[y] += 1
    else:
        y_dict[y] = 1

for key, value in x_dict.items():
    if value == 1:
        print(key, end=' ')
for key, value in y_dict.items():
    if value == 1:
        print(key)
