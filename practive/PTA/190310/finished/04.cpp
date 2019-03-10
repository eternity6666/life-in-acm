#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1000 + 5;

int n;
long long m[maxn];
vector<long long> ve;

int main()
{
    freopen("in.txt", "r", stdin);
    
    cin >> n;

    fei(1, n)
    {
        cin >> m[i];
        fej(1, i - 1)
        {
            long long x = m[i] + m[j];
            ve.push_back(x);
        }
    }
    cout << ve.size() << endl;

    sort(ve.begin(), ve.end());

    long long a = -1;
    int ans = 0;
    int tmp = 0;
    vector<long long>::iterator it;

    for(it = ve.begin(); it != ve.end(); it++)
    {
        if(a == *it)
        {
            tmp++;
        }
        else
        {
            if(tmp > ans)
                ans = tmp;
            tmp = 1;
            a = *it;
        }
    } 
    if(tmp > ans)
        ans = tmp;
    cout << ans << endl;
    return 0;
}


