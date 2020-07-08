#include <bits/stdc++.h>
using namespace std;

#define fre freopen("./tmp.txt", "r", stdin)

int main()
{
    // fre;
    int x;
    cin >> x;
    vector<int> v(1, 1);
    long d = 1;
    while (true)
    {
        if (d % x == 0)
        {
            // int n=0;
            // for(vector<int>::iterator it=v.begin();it!=v.end();it++)
            // {
            //     n++;
            // }
            cout << d / x << " " << v.size() << endl;
            break;
        }
        else
        {
            d = 10 * d + 1;
            // cout<<d<<endl;
            v.push_back(1);
        }
    }
    return 0;
}