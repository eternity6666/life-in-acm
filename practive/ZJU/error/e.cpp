#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int t, n;
long long a[maxn], b[maxn];

bool deal();

int main()
{
    freopen("in.txt", "r", stdin);

    cin >> t;
    while(t--)
    {
        cin >> n;
        fei(1, n)
            cin >> a[i];
        fei(1, n)
            cin >> b[i];
        if(deal())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

bool deal() 
{
    for(int i = n; i >= 1; i--)
    {
        long long tmp = 0;

        /*
        fei(1, n)
            cout << i << " ";
        cout << endl;
        fei(1, n)
            cout << b[i] << " ";
        // cout << endl;
        */
        for(int j = n; j >= i; j--)
            tmp = tmp + b[j] * (j / i);
        // cout << tmp << ": " << a[i] << endl;
        if(tmp >= a[i])
        {
            long long tmp2 = a[i];
            for(int j = i; j <= n; j++)
            {
                int tmp3 = j / i;
                if(tmp3 * b[j] > tmp2)
                {
                    b[j - tmp3 * i] += tmp2 / tmp3;
                    b[j] -= tmp2 / tmp3;
                    if(tmp2 % tmp3 != 0)
                    {
                        b[j - tmp3 * i] += 1;
                        b[j]--;
                    }
                    tmp2 = 0;
                }
                else
                {
                    b[j - tmp3 * i] += b[j];
                    tmp2 -= b[j] * tmp3;
                    b[j] = 0;
                }

                if(tmp2 <= 0)
                    break;
            }
        }
        else
            return false;
    }
    return true;
}

