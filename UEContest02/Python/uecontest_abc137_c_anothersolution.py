# ABC137Cの別解です
# collectionsモジュールを用いると、配列内の各種要素の個数を調べることができます
from collections import Counter
n = int(input())
c = Counter(["".join(sorted(input())) for _ in range(n)])
ans = 0
for w in c:
    ans += c[w] * (c[w] - 1)
print(ans // 2)
