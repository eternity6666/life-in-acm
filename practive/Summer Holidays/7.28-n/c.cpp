#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#define usefre
using namespace std;

unsigned long long got1(unsigned long long n);
int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif

    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        vector<int> array;
        unsigned long long ans = 0;
        array.push_back(0);
        long long i = 1;
        while(i <= n)
        {
            int tmp;
            if( i == 1)
                tmp = 0;
            else
                tmp = *(array.begin() + i / 2) + got1(i);
            array.push_back(tmp);
            ans += abs(tmp);
           // cout << tmp <<endl;
            i++;
        }
        vector<int>::iterator it;
        for(it = array.begin() + 1, i = 1; it != array.end(); it++)
        {
            cout << "a"<<i++<<" = ";
            cout << *it << endl;
        }
        cout << ans % 1000000007 << endl;
    }
    return 0;
}

unsigned long long got1(unsigned long long n)
{
    if((n * (n + 1) / 2) % 2 == 1) return -1;
    else return 1;
}
