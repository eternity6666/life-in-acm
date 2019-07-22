import random

s = ''
for i in range(1000000):
    m = int(random.randint(100, 10000))
    if m % 3 == 0:
        s = s + 'o'
    else:
        s = s + 'v'

f = open("in.txt", "w")
print(s, file=f)
f.close()
