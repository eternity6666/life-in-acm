#include <iostream>
using namespace std;

bool can(int m, int s)
{
    return s >= 0 && s <= 9 * m;
}

int main()
{
    int m, s;
    cin >> m >> s;
    string minn = "";
    int sum = s;
    for (int i = 0; i < m; i++)
        for (int d = 0; d < 10; d++)
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d))
            {
                minn += '0'+d;
                sum -= d;
                break;
            }
    sum = s;
    int len = minn.length();
    if(len!=m)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    string maxx = "";
    for(int i = 0; i < m; i++)
        for(int d = 9; d >= 0; d--)
            if((i>0||d>0||(m==1&&d==0))&&can(m-i-1, sum-d))
            {
                maxx += '0'+d;
                sum-=d;
                break;
            }
    len = maxx.length();
    if(len != m)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    cout << minn << " " << maxx << endl;
    return 0;
}
