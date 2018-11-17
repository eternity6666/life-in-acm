#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#define usefre
using namespace std;

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
#endif

    int k, pos;
    cin >> k >> pos;
    string s;
    cin >> s;
    while(1)
    {
        if(k == 0)
            break;
        string tmp = "";
        for(int i = 0; i < s.size(); i = i + 2)
        {
            int a = s[i] - '0';
            for(int j = 0; j < a; j++)
            {
                tmp = tmp + s[i + 1];
            }
        }
        s = tmp;
        k--;
    }
    cout << s[pos] << endl;
    return 0;
}
