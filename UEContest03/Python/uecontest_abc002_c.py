x, y, a, b, c, d = map(int, input().split())
print(abs((a - x) * (d - y) - (b - y) * (c - x)) * 0.5)
