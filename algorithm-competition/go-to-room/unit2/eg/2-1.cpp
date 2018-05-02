#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;;i++)
    {
        int x=i*i;
        if(x<1000) continue;
        if(x>10000) break;
        if(x/1000==x/100%10&&x%10==x/10%10)
        {
            cout<<x<<endl;
        }
    }
    return 0;
}