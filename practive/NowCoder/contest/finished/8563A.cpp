#include <iostream>
#include <map>
using namespace std;

struct cmp{
    bool operator()(int a, int b) const
    {
        return a > b;
    }
};

map<int, int, cmp> ma;

int main()
{
    int n, k;
    int tmp;
    cin >> n >> k;
    for(int i = 0; i < n; ++i)
    {
        cin >> tmp;
        ma[tmp]++;
    }
    map<int, int, cmp>::iterator mit;
    long long sum = 0;
    for(mit = ma.begin(); mit != ma.end(); ++mit)
    {
        // cout << mit->first << ", " << mit->second << endl;
        if(mit->first % 2 != 0)
        {
            sum += mit->first * mit->second;
            continue;
        }
        int tmp = min(mit->second, k);
        mit->second -= tmp;
        k -= tmp;
        ma[mit->first/2] += tmp;
        sum += mit->first * mit->second;
    }
    cout << sum << endl;
    return 0;
}

