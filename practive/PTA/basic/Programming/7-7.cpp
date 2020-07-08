#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
using namespace std;
// #define usefre

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int s, f;
    scanf("%d:%d", &s, &f);
    string c[] = {"AM", "PM"};
    int flag;
    if (s >= 12&&s!=24)
    {
        flag = 1;
        cout << s - 12 << ":" << f << " " << c[flag] << endl;
    }
    else
    {
        flag = 0;
        cout << s << ":" << f << " " << c[flag] << endl;
    }
    return 0;
}
