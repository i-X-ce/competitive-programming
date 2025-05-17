n, k = input().split()
n = int(n)
k = int(k)
ans = 1
limit = 10 ** k
line = input()
aas = [int(x) for x in line.split()]
for a in aas:
    if ans * a >= limit:
        ans = 1
    else:
        ans *= a
print(ans)