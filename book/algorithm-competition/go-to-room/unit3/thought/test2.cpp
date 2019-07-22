#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;
#define maxn 10000000+10
int main()
{
    string s;
    getline(cin,s);
    int tot=0;
    for(int i=0;i<s.length();i++)
    if(s[i]=='1')
    tot++;
    printf("%d\n",tot);
    return 0;
}