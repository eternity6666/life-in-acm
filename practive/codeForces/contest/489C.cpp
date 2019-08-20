#include <iostream>
using namespace std;

bool can(int m, int s)
{
    return s>=0&&s<=9*m;
}

int main()
{
    int m, s; cin >> m >> s;
    string minn = "";
    int sum = s;
    for(int i = 0; i < m; i++)
        for(int d = 0; d < 10; d++)
            if((i > 0 || d > 0 || (m == 1 && d == 0))&&can(m-i-1, sum-d))
            {
                minn += (char)('0'+ d);
                sum-=d;
                break;
            }
    int len=minn.length();
    if(flag || len != m)
        cout << -1 << " " << -1 << endl;
    else
    {
        bool flag = 0;
        for(int i = 0; i < len; i++)
            if(minn[i]) flag = 1, cout << minn[i];
            else if(flag) cout << minn[i];
        cout << " ";
        for(int i = len - 1; i >= 0; i--) cout << minn[i];
        cout << endl;
    }
    return 0;
}
