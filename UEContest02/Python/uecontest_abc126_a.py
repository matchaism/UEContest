n, k = map(int, input().split())
s = input()
print(s[0:k - 1] + chr(ord(s[k - 1:k]) + 32) + s[k:])
