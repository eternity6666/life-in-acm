def c(y, x):
    ans = 0
    if y == x:
        ans = 1
    elif y == 0:
        ans = 1
    else:
        ans = c(y-1, x-1) + c(y, x-1)
    return ans


def deal(x):
    ans = 0
    while x > 0:
        ans = ans + x % 10
        x = x // 10
    return ans


t = int(input())
for x in range(t):
    s = input().split(' ')
    n = int(s[0])
    m = int(s[1])
    print(deal(c(m, n)))
