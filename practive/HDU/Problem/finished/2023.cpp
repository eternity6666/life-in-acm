#include <bits/stdc++.h>
using namespace std;

double sub[10];
int main()
{
    freopen("in.txt", "r", stdin);
    int n, m;
    while(~scanf("%d %d", &n, &m))
    {
        memset(sub, 0, sizeof(sub));
        double stu[55][10];
        for(int i = 1; i <= n; i++)
        {
            double sum = 0;
            for(int j = 1; j <= m; j++)
            {
                cin >> stu[i][j];
                sum += stu[i][j];
                sub[j] += stu[i][j];
            }
            stu[i][m + 1] = sum / m;
        }
        for(int i = 1; i <= n; i++)
        {
            if(i > 1)
                printf(" ");
            printf("%.2lf", stu[i][m + 1]);
            if(i == n)
                printf("\n");
        }
        for(int j = 1; j <= m; j++)
        {
            sub[j] /= n;
            if(j > 1)
                printf(" ");
            printf("%.2lf", sub[j]);
            if(j == m)
                printf("\n");
        }
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            bool flag = 1;
            for(int j = 1; j <= m; j++)
            {
                if(stu[i][j] < sub[j])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag) ans++;
        }
        cout << ans << endl ;
    }
    return 0;
}
