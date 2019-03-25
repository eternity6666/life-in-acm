#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    int tab = 2;
    int n = 0;
    char c;
    char tmp;
    while(c = getchar())
    {
        cout << c;
        if(c == '{')
        {
            n++;
            cout << endl;
            fei(1, n)
                fej(1,tab)
                    cout << " ";
        }
        else if(c == '}')
        {
            n--;
            cout << endl;
            if(n == 0)
                break;
            fei(1, n)
                fej(1,tab)
                cout << " ";
        }
        else if(tmp != ' '&& c == ';')
        {
            cout << endl;
            fei(1, n)
                fej(1,tab)
                    cout << " ";
        }
        tmp = c;
    }
    return 0;
}


