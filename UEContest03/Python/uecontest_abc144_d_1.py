from math import pi, tan
EPS = 0.0000000001

def f(a, b, theta):
    if theta > pi * 0.5 - EPS:
        ret = 0.0
    elif a * tan(theta) <= b:
        ret = a**2 * b - a**3 * tan(theta) * 0.5
    else:
        ret = a * b**2 * 0.5 / tan(theta)

    return ret

a, b, x = map(int, input().split())

ok = pi * 0.5
ng = 0.0
while ok - ng >= EPS:
    mid = (ok + ng) * 0.5
    if f(a, b, mid) < x:
        ok = mid
    else:
        ng = mid
print("{:.10f}".format(ok / pi * 180))
