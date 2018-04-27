#include <bits/stdc++.h>
using namespace std;

#define ll long
// #define syfre

void deal(ll A, ll B, ll C);

int main()
{
#ifdef syfre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    ll tmp;
    vector<ll> n;
    while (cin >> tmp)
    {
        n.push_back(tmp);
    }
    vector<ll>::iterator it;
    /*
    for(it = n.begin();it!=n.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<endl;
    */
   int i=1;
    for (it = n.begin(); it != n.end(); it +=3)
    {
        cout << "Case #" << i++<< ": ";
        // cout<<endl;
        deal(*it, *(it+1), *(it+2));
    }
}

void deal(ll A, ll B, ll C)
{
    int m; //记录是否进退位
    ll sumAB;
    sumAB = A + B;
    /*
    cout<<A<<endl<<B<<endl<<C<<endl;
    cout<<sumAB<<endl;
    */
    if (sumAB > C)
    {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
    // cout<<sumAB<<endl;
}