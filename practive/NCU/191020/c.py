import operator


class Stu:
    def __init__(self, name, grade, num):
        self.name = name
        self.grade = grade
        self.num = num


n = int(input())
li = []
for i in range(n):
    s = input().split(' ')
    li.append(Stu((s[0]+s[1]).lower(), int(s[2]), int(s[3])))

cmpfun = operator.attrgetter('grade')
li.sort(key = cmpfun)
li.reverse()
for stu in li:
    print(stu.name + ' '+str(stu.grade) + ' ' + str(stu.num))
