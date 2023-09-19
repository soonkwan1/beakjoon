d = {}

def dp_w():  
    for x in range(0, 21):
        for y in range(0, 21):
            for z in range(0, 21):
                if (x<=0) or (y<=0) or (z<=0):
                    d[x, y, z] = 1
                elif (x<y) and (y<z):
                    d[x,y,z] = d[x,y,z-1] + d[x,y-1,z-1] - d[x,y-1,z]
                else:
                    d[x,y,z] = d[x-1,y,z] + d[x-1, y-1, z] + d[x-1,y,z-1] - d[x-1, y-1, z-1]
                    


dp_w()

while True:
    line = list(map(int, input().split()))
    a, b, c = line[0], line[1], line[2]
    if line.count(-1) == 3:
        break

    if (line[0]<=0) or (line[1]<=0) or (line[2]<=0):
        print("w({0}, {1}, {2}) = {3}".format(a, b, c, 1))
    elif (line[0] > 20) or (line[1] > 20) or (line[2] > 20):
        print("w({0}, {1}, {2}) = {3}".format(a, b, c, d[20, 20, 20]))
    else:
        print("w({0}, {1}, {2}) = {3}".format(a, b, c, d[a,b,c]))
