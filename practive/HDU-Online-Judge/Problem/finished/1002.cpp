#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int t;
    cin >> t;
    for( int j = 1; j <= t; j++)
    {
        string a, b;
        cin >> a >> b;
        int jw = 0;
        string ans = "";
        int ai, bi;
        ai = a.length() - 1;
        bi = b.length() - 1;
        while(ai >= 0 || bi >= 0)
        {
            if(ai >= 0 && bi >= 0)
            {
                ans += ((a[ai] - '0' + b[bi] - '0' + jw) % 10 + '0');
                jw = (a[ai] - '0' + b[bi] - '0' + jw) / 10;
                ai--;
                bi--;
            }
            else if (ai >= 0 && bi < 0)
            {    
                ans += ((a[ai] - '0' + jw) % 10 + '0');
                jw = (a[ai] - '0' + jw) / 10;
                ai--;
            }
            else if (ai < 0 && bi >= 0)
            {
                ans += ((b[bi] - '0' +jw) % 10 + '0');
                jw = ((b[bi] - '0' + jw) / 10);
                bi--;
            }
        }
        if( jw == 1)
        {
            ans += ('0' + jw);
        }
        if( j != 1)
        {
            cout << endl;
        }
        cout << "Case " << j << ":" <<endl;
        cout << a << " + " << b << " = ";
        for(int  i = ans.length() - 1; i >= 0; i--)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
