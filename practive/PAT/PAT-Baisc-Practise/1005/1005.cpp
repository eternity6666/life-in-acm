#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cmath>
using namespace std;
#define fre freopen("./tmp.txt", "t", stdin)

struct shu
{
    int num;
    bool m;
} s[100];
int main()
{
    // fre;
    int n;
    cin >> n;
    cout<<n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].num;
        s[i].m=true;
    }
    for (int i = 0; i < n; i++)
    {
        int j=0;
        while(s[i].num!=1&&s[i].m)
        {
            if(s[i].num%2==0)
            {
                s[i].num/=2;
                for(;j<n-i;j++)
                {
                    if(s[j+i].num==s[i].num)
                    {
                        s[j+i].m=false;
                    }
                }
            }
            else{
                s[i].num=s[i].num*3+1;
                for(;j<n-i;j++)
                {
                    if(s[i+j].num==s[i].num)
                    {
                        s[j+i].m=false;
                    }
                }
            }
        }
    }
    int o=0;
    for(;o<n;o++)
    {
        if(s[o].m)
        {

        cout<<s[o].num<<endl;
        }
        else continue;
    }

}