st = input()
sd = ""
for x in st:
    if x.isalpha():
        if x.islower():
            sd = sd + x.upper()
        else:
            sd = sd + x.lower()
    else:
        sd = sd + str((int(x)+5)%10)
print(sd)