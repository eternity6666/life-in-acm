#include <bits/stdc++.h>
using namespace std;

int min(int a, int b) {
    return a < b ? a : b;
}

int main()
{
    double a, b, n;
    cin >> a >> b >> n;

    double ans = a / b;
    // ans = ans % 1;
    string tmp = to_string(ans);
    // cout << tmp << endl;
    // tmp = tmp + "00000000000000000";
    int j;
    for(int i = 0; i < tmp.length(); i++)
    {
        if(tmp[i] == '.')
        {
            j = i;
            break;
        }
    }
    cout << tmp << endl;
    string tmpAns = "";
    for(int i = j + n; i < min(tmp.length(), j + n + 3); i++)
        tmpAns = tmpAns + tmp[i];
    while(tmpAns.length() < 3)
    {
        tmpAns = tmpAns + '0';
    }

    cout << tmpAns << endl;
}

