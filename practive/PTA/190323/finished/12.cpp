#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    // freopen("in.txt", "r", stdin);
    /*
    cin >> hh >> mm;
    */
    int hh, mm;
    string s;
    while(cin >> s)
    {
        if(s[0] == '0')
            hh = s[1] - '0';
        else
            hh = (s[0] - '0') * 10 + (s[1] - '0');
        if(s[3] == '0')
            mm = s[4] - '0';
        else
            mm = (s[3] - '0') * 10 + (s[4] - '0');
        //cout << hh << mm << endl;
        bool flag;
        if(hh < 12)
            flag = false;
        else if(hh == 12 && mm == 00)
            flag = false;
        else
            flag = true;
        if(!flag)
            printf("Only %02d:%02d.  Too early to Dang.\n", hh, mm);
        else
        {
            if(mm == 00)
                for(int i = 0; i < hh - 12; i++)
                    cout << "Dang";
            else
                for(int i = 0; i < hh - 11; i++)
                    cout << "Dang";
            cout << endl;
        }
    }
    return 0;
}


