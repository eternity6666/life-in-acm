#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 10000000 + 5;

vector<int> ve, vef, vem;
int t, n;
int tmpf, tmpm;
map<int, bool> ma;
int gcd(int a, int b);
int deal();

int main()
{
    // freopen("in.txt", "r", stdin);
    cin >> t;
    while(t--)
    {
        cin >> n;
        ve.clear();
        vef.clear();
        vem.clear();
        tmpf = tmpm = 0;
        fei(1, n)
        {
            int tmp;
            cin >> tmp;
            ve.push_back(tmp);
            ma[tmp] = 0;
        }
        fei(1, n)
        {
            char tmp;
            cin >> tmp;
            if(tmp == 'F')
            {
                tmpf++;
                vef.push_back(ve[i - 1]);
            }
            else
            {
                vem.push_back(ve[i - 1]);
                tmpm++;
            }
        }
        cout << deal() << endl;
    }
    return 0;
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int deal()
{
    int ans = 0;
    vector<int>::iterator it;
    for(it = vef.begin(); it != vef.end(); it++)
    {
        if(!ma[*it] && tmpm > 0)
        {
            vector<int>::iterator it2;
            int maxGcd = 0;
            int tmpIt2 = 0;
            for(it2 = vem.begin(); it2 != vem.end(); it2++)
            {
                // cout << 1 << endl;
                if(!ma[*it2])
                {
                    int tmpGcd = gcd(*it, *it2);
                    // cout << tmpGcd << endl;
                    if(tmpGcd > 1)
                    {
                        if(maxGcd < tmpGcd)
                        {
                            maxGcd = tmpGcd;
                            tmpIt2 = *it2;
                        }
                    }
                }
            }
            if(tmpIt2 != 0)
            {
                ma[tmpIt2] = 1;
                ma[*it] = 1;
                tmpm--;
                tmpf--;
                ans++;
            }
        }
        if(tmpm == 0)
            break;
    }
    ans = ans + tmpm + tmpf;
    return ans;
}
