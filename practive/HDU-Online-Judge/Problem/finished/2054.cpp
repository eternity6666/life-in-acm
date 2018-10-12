#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000;
char a[maxn], b[maxn];

void clearZero(char *c);

int main()
{
    while(cin >> a >> b)
    {
        clearZero(a);
        clearZero(b);
        if(strcmp(a, b) == 0)
            cout << "YES"<< endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

void clearZero(char *c)
{
    int len = strlen(c);
    if(strstr(c, ".") != NULL)
    {
        int i = len - 1;
        for(len - 1; i >= 0; i--)
        {
            if(c[i] == '0')
                c[i] = '\0';
            else
                break;
        }
        if(c[i] == '.')
            c[i] = '\0';
    }
    /*
    int frontZero = 0;
    for(int i = 0; i < len; i++)
    {
        if(c[i] == '0')
            frontZero++;
        else
            break;
    }
    */
}

/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    double a, b;
   // string a, b;
    while(cin >> a >> b)
    {
        if(a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
*/
