#include <bits/stdc++.h>
using namespace std;

int n, k;
map<int, int> ma;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    while(cin >> n >> k)
    {
        for(int i = 0; i < n; ++i)
        {
            int tmp; cin >> tmp;
            ma[tmp]++;
        }
        map<int, int>::iterator it;
        while(k)
        {
            it = ma.end();
            it--;
            int ea = it->first, ec = it->second;
            if(ec<=k)
            {
                ma[ea-1]+=ec;
                k-=ec;
                ma.erase(it);
            }
            else
            {
                ma[ea-1]+=k;
                ma[ea]-=k;
                ec = k;
                k = 0;
            }
            while(ec)
            {
                it = ma.begin();
                int ba = it->first;
                int bc = it->second;
                if(bc<=ec)
                {
                    ma.erase(it);
                    ma[ba+1]+=bc;
                    ec-=bc;
                }
                else
                {
                    ma[ba+1]+=ec;
                    ma[ba]-=ec;
                    ec = 0;
                }
            }
        }
        it = ma.begin();
        int a = it->first;
        it = ma.end();
        it--;
        int b = it->first;
        cout << b - a << endl;
        ma.erase(ma.begin(), ma.end());
    }
    return 0;
}
