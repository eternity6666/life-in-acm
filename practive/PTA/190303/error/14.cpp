#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

bool deal(long long x);

int main()
{
    freopen("in.txt", "r", stdin);
    long long a, b;
    cin >> a >> b;
    vector<long long> v;
    fei(a, b)
    {
        if(deal(i))
            v.push_back(i);
    }
    if(v.empty())
        cout << "None" << endl;
    else
    {
        vector<long long>::iterator it;
        for(it = v.begin(); it != v.end(); it++)
        {
            if(it == v.begin())
                cout << *it;
            else
                cout << " " << *it;
        }
        cout << endl;
    }
    return 0;
}

bool deal(long long x)
{
    long long sum = 0;
    fei(1, x / 2)
    {
        if(x % i == 0)
            sum = sum + i;
    }
    // cout << sum << endl;
    if(sum == x)
    {
        cout << x << endl;
        return true;
    }
    else
        return false;
}

