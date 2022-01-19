pi = 3.1415
R, L = [int(x) for x in input().split()]
v = (4/3)*(pi*R*R*R)
n = int(L/v)
print(n)