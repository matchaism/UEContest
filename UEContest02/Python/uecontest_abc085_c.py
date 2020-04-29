n, y = map(int, input().split())
a = -1
b = -1
c = -1
for i in range(min(y // 10000, n), -1, -1):
    for j in range(n - i, -1, -1):
        if 10000 * i + 5000 * j + 1000 * (n - i - j) == y:
            a = i
            b = j
            c = n - i - j
print(a, b, c)
