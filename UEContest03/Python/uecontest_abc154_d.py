n, k = map(int, input().split())
E = list(map(lambda x: (x + 1) * 0.5, list(map(int, input().split()))))
esum = sum(E[:k])
ans = esum
for i in range(n - k):
    esum = esum - E[i] + E[i + k]
    ans = max(ans, esum)
print(ans)
