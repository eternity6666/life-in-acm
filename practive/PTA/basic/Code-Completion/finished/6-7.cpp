#include <stdio.h>
#include <math.h>

int IsTheNumber(const int N);

int main()
{
    int n1, n2, i, cnt;

    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for (i = n1; i <= n2; i++)
    {
        if (IsTheNumber(i))
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

int cfshu(int N)
{
    int a[10] = {0};
    while (N)
    {
        int i = N % 10;
        if (a[i])
            return 0;
        else
            a[i]++;
        N/=10;
    }
    return 1;
}

int IsTheNumber(const int N)
{
    int m;
    m = cfshu(N);
    if (m)
    {
        /*
        int i = (int)sqrt(N) - 1;
        for (; i <= sqrt(N); i++)
        {
            if (i * i == N)
            {
                return 1;
            }
        }
        if (i == sqrt(N) + 1)
        {
            return 0;
        }
        */
       double tmp=sqrt(double(N));
       if(tmp==(int)tmp)
       return 1;
       else return 0;
    }
    else
        return 0;
}
