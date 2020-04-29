n = int(input())
job = [[0, 0] for _ in range(n)]
for i in range(n):
    a, b = map(int, input().split())
    job[i][0] = b
    job[i][1] = a
job.sort()

ans = "Yes"
t = 0
for i in range(n):
    t += job[i][1]
    if t > job[i][0]:
        ans = "No"

print(ans)
