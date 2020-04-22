n = int(input())
a = sorted(list(map(int, input().split())))
ans = "YES"
for i in range(n - 1):
    if a[i] == a[i + 1]:
        ans = "NO"
        break
print(ans)
