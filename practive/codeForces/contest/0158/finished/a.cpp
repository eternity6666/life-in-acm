#include <bits/stdc++.h>
using namespace std;

// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;
    vector<int> a;
    k=n-k+1;
    int tmp, ktmp;
    int ans = 0;
    while (n && cin >> tmp)
    {
        a.push_back(tmp);
        if (n == k)
        {
            ktmp = tmp;
        }
        n--;
    }
    
    vector<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
    {
        // cout<<"shuchu"<<*it<<endl;
        if (*it > 0)
        {
            if(*it>=ktmp)
            ans++;
        }
        else
            break;
    }
    // cout<<ktmp<<endl;
    cout << ans << endl;
    return 0;
}