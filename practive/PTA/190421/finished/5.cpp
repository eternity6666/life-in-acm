#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n, a, b;
int an, bn;

int main()
{
    freopen("in.txt", "r", stdin);
    scanf("%d %d %d", &n, &a, &b);
    an = a;
    bn = b;
    int count = 0;
    fei(1, n)
    {
        int tmp;
        cin >> tmp;
        if(an + bn > 0)
        {
            count++;
            if(tmp)
                if(an > 0)
                    if(bn < b)
                    {
                        an--;
                        bn++;
                    }
                    else
                        bn--;
                else
                    bn--;
            else
                if(bn > 0)
                    bn--;
                else
                    an--;
        }
    }
    cout << count << endl;
    return 0;
}


