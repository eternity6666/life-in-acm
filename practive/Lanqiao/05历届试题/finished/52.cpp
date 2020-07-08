#include <iostream>
#include <set>
#include <vector>
using namespace std;
typedef long long ll;
vector<ll> ve1, ve2;
set<ll> se;
int main()
{
    ll a, b, n;
    ll xh;
    bool isXh = false;
    cin >> a >> b >> n;
    if (a % b == 0)
        cout << "000" << endl;
    else
    {
        ll tmp = a, count = 0;
        while (tmp % b != 0)
        {
            if (count == n + 3)
                break;
            count++;
            ll mod = tmp % b;
            if (se.find(mod) != se.end())
            {
                ve1.push_back(tmp / b);
                ve2.push_back(mod);
                isXh = true;
                ll len = ve2.size();
                for (int i = 0; i < len; ++i)
                    if (ve2[i] == mod)
                    {
                        // cout << "mod="<<mod<<"xh="<<i<<endl;
                        xh = i+1;
                        break;
                    }
                break;
            }
            se.insert(mod);
            ve1.push_back(tmp / b);
            ve2.push_back(mod);
            // cout << tmp << " " << tmp / b << " " << mod << endl;
            tmp = mod * 10;
            if (tmp % b == 0)
            {
                ve1.push_back(tmp / b);
                ve2.push_back(mod);
                // cout << tmp << " " << tmp / b << " " << mod << endl;
                break;
            }
        }
        ll ve1Size = ve1.size();
        if (n + 2 < ve1Size)
        {
            // cout << 1 << " ";
            for (int i = 0; i < 3; ++i)
                cout << ve1[i + n];
            cout << endl;
        }
        else
        {
            if (isXh)
            {
                // cout << 2 << endl;
                ll xhLen = ve1Size - xh;
                // cout << xhLen << endl;
                // cout << xh << endl;
                ll tmp = n - xh;
                ll mod = tmp % xhLen;
                for (int i = 0; i < 3; ++i)
                {
                    cout << ve1[(i + mod) % xhLen + xh];
                }
                cout << endl;
            }
            else
            {
                // cout << 3 << " ";
                for (int i = 0; i < 3; ++i)
                {
                    if (n + i < ve1Size)
                        cout << ve1[n + i];
                    else
                        cout << 0;
                }
                cout << endl;
            }
        }
    }
    return 0;
}