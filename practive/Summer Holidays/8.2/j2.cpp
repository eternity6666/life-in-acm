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

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    long n, p2, p3;
    scanf("%ld %ld %ld", &n, &p2, &p3);
    //while(scanf("%ld %ld %ld", &n, &p2, &p3) == 3)
   // {
    long cost = 0;
    double p2Tmp, p3Tmp;
    p2Tmp = (double) p2 / 2;
    p3Tmp = (double) p3 / 3;
    while(n > 0)
    {
        if(n <= 2)
        {
            if(p2 >= p3)
            {
                cost = cost + p3;
                n = 0;
            }
            else
            {
                cost = cost + p2;
                n = 0;
            }
        }
        else if( n == 3 ) 
        {
            if(2 * p2 > p3)
            {
                cost = cost + p3;
                n = 0;
            }
            else
            {
                cost = cost + p2 * 2;
                n = 0;
            }
        }
        else if( n == 4 )
        {
            if(p2Tmp > p3Tmp)
            {
                cost = cost + p3;
                n = n - 3;
            }
            else
            {
                cost = cost + p2;
                n = n - 2;
            }
        }
        else if( n == 5)
        {
            if( 3 * p2 > 2 * p3 && p2 + p3 > 2 * p3)
            {
                cost = cost + 2 * p3;
                n = 0;
            }
            if( 2 * p3 > 3 * p2 && p2 + p3 > 3 * p2)
            {
                cost = cost + 3 * p2;
                n = 0;
            }
            if( p2 + p3 < 2 * p3 && p2 + p3 < 3 * p2)
            {
                cost = cost + p2 + p3;
                n = 0;
            }
        }
        else if( n >=6 )
        {
            if( 3 * p2 > 2 *p3)
            {
                cost = cost + n / 6 * p3 * 2;
            }
            else
            {
                cost = cost + n / 6 * p2 * 3;
            }
            n = n % 6;
        }
    }
    cout << cost << endl;
   // }
    return 0;
}
