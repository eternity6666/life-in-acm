st = input()
sd = ''
for x in st:
    if x.isalpha():
        sd = sd + x
    elif x == ' ':
        sd = sd + x

sd = sd.replace('  ', ' ').split(' ')
lenSd = len(sd)
ans = ''
x = 0
flag = True
while x < lenSd:
    if sd[x] != ' ':
        tmp = x + 1
        t = ''
        while tmp < lenSd:
            if sd[tmp] == '':
                tmp = tmp + 1
            else:
                break
        tmpStr = ''
        if tmp == lenSd:
            tmpStr = sd[x]
        elif sd[tmp] != ' ':
            tmpStr = sd[x] + sd[tmp]
        x = tmp + 1
        if flag:
            ans = tmpStr
            flag = False
        else:
            ans = ans + ' ' + tmpStr
    else:
        x = x + 1
    
print(ans)
