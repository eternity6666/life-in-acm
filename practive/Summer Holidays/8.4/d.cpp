#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <queue>
#include <stack>
#include <fstream>
#include <sstream>
#include <cstdio>
#define usefre

using namespace std;
/*
struct person{
    int face;
    int body;
    long weight;
};
*/
int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        map<int, long> person;
        long ans = 0;
        for(int j = 1; j <= k; j++)
        {
            int a, b;
            long c;
            cin >> a >> b >> c;
            if(person.find(b) != person.end())
            {
                if(person[b] < c)
                {
                    ans = ans - person[b] + c;
                    person[b] = c;
                }
            }
            else
            {
                ans = ans + c;
                person[b] = c;
            }
        }
        printf("Case #%d: %ld\n", i, ans);
    }
    return 0;
}
