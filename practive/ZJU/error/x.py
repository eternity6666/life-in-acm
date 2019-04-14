
for(i = 2; i < 10e9; i++):
    if(x[i]):
        for(j = 2; i * j <= 10e9; j++):
            x[i*j] = false;
        print x + '\n'

