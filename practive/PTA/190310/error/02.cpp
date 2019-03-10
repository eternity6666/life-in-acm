#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1000000 + 5;

vector<long long> ans2;
vector<long long>::iterator it;
long long n;
long long x[maxn];

bool quick(int a, int b)
{
    if(a > b)
        return false;
    int first = a;
    int last = b;
    int tmp = x[a];
    // cout << tmp << endl;
    bool flag = 0;
    while(first < last)
    {
        while(first < last && x[last] >= tmp)
        {
            last--;
            flag = 1;
        }

        x[first] = x[last];

        while(first < last && x[first] <= tmp)
        {
            ++first;
            flag = 1;
        }
        
        x[last] = x[first];
    }
    if(!flag)
        ans2.push_back(tmp);
    x[first] = tmp;
    quick(a, first - 1);
    quick(first + 1, b);
    /*
    if(quick(a, first - 1) || quick(first + 1, b))
    {
        ans2.push_back(tmp);
    }
    */
    return true;
}

int main()
{
    freopen("in.txt", "r", stdin);

    cin >> n;

    fei(1, n)
        cin >> x[i];
    
    quick(1, n);

    // output
    sort(ans2.begin(), ans2.end());
    // cout << ans2.size() << endl;
    for(it = ans2.begin(); it != ans2.end(); it++)
    {
        if(it == ans2.begin())
            cout << *it;
        else
            cout << " " << *it;
    }
    cout << endl;
    return 0;
}


