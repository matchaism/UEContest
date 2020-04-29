n = int(input())
s = ["".join(sorted(input())) for _ in range(n)]

dic = {}
for w in s:
    if w in dic:
        dic[w] += 1
    else:
        dic[w] = 1

ans = 0
for w in dic:
    ans += dic[w] * (dic[w] - 1) // 2

print(ans)
