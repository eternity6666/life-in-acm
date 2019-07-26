next=list()

def getNext(s):
    if not isinstance(s, str):
        return 
    slen = len(s)
    next.append(-1)
    k = -1
    j = 0
    while j < slen - 1:
        if k == -1 or s[j] == s[k]:
            k += 1
            j += 1
            # print(str(k) + " " + str(j))
            if s[j] != s[k]:
                next.append(k)
            else:
                next.append(next[k])
        else:
            k = next[k]
    s = ''
    for i in next:
        s = s + str(i) + ' '
    print(s)

if __name__ == '__main__':
    getNext('dabcdabd')
