n, a, b = map(int, input().split())
r = 0
for i in range(1, n + 1):
    c = 0
    t = i
    for j in range(5):
        c += t % 10
        t //= 10#"t /= 10"ではない
    if a <= c and c <= b:
        r += i
print(r)
