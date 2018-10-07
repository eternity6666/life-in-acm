#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;
char c4[] = {'~', '!', '@', '#', '$', '%', '^'};
int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    while(n--)
    {
        int ans, flag1, flag2, flag3, flag4;
        ans = flag1 = flag2 = flag3 = flag4 = 0;
        string a;
        cin >> a;
        int leng = a.length();
        fni(0, leng)
        {
            if(a[i] >= 'A' && a[i] <= 'Z')
                flag1 = 1;
            else if(a[i] >= 'a' && a[i] <= 'z')
                flag2 = 1;
            else if(a[i] >= '0' && a[i] <= '9')
                flag3 = 1;
            else
            {
                fej(0, 6)
                    if(c4[j] == a[i])
                    {
                        flag4 = 1;
                        break;
                    }
            }
            if(flag1 + flag2 + flag3 + flag4 >= 3)
            {
                ans = 1;
                break;
            }
        }
        if(leng < 8 || leng > 16)
            ans = 0;
        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

