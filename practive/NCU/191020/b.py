while True:
    try:
        st = input()
        a = st.split(' ')
        x = abs(int(a[0])-int(a[2]))
        y = abs(int(a[1])-int(a[3]))
        print(x * y)
    except:
        break
