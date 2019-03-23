#include <bits/stdc++.h>
using namespace std;

/*
bool operator < (long long &a, long long &b)
{
    return a > b;
}
*/
struct cmp{
    bool operator() (const long long &a, const long long &b)
    {
        return a >= b;
    }
};
/*
bool cmp(long long a, long long b)
{
    return a > b;
}
*/

int main()
{
    long long tmp;
    for(int i = 0; i < 3; i++)
    {
        cin >> tmp;
        se.insert(tmp);
    }
    set<long long, cmp> se;
    set<long long, cmp>::iterator it;
    for(it = se.begin(); it != se.end(); it++)
        if(it == se.begin())
            cout << *it;
        else
            cout << *it << " ";
    cout << endl;
    return 0;
}

