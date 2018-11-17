#include <iostream>
#include <cstdio>
#include <fstream>
#define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    char a[20];
   while(cin >> a){
    int isbn = 0, tmp, i;
    for(i = 0; i < 10; i++) 
    {
        if(a[i] == 'X')
            isbn = isbn + (10 - i) * 10;
        else if(a[i] == '?')
            tmp = i;
        else
            isbn = isbn + (10 - i) * (a[i] - '0');
    }
    int t = -1;
    for(i = 0; i <= 10; i++)
        if((isbn + (10 - tmp) * i) % 11 == 0)
        {
            t = i;
            break;
        }
    if(t == 10)
        if(tmp == 9) cout << "X\n";
        else cout << -1 << endl;
    else cout << t << endl;
   }
    return 0;
}
