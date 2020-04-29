n, T = map(int, input().split())
ans = 1001
for _ in range(n):
    c, t = map(int, input().split())
    if t <= T:
        ans = min(ans, c)
print(("TLE" if ans == 1001 else ans))
