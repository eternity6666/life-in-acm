#include <bits/stdc++.h>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    string a, b;
    char aa, bb;
    string atmp, btmp, answer;
    cin >> a >> aa >> b >> bb;
    answer = "";
    atmp = "";
    btmp = "";
    for (int i = 0, j = 0; j < b.length() || i < a.length(); i++, j++)
    {
        if (i < a.length())
            if (a[i] == aa)
            {
                atmp += a[i];
            }
        if (j < b.length())
            if (b[j] == bb)
            {
                btmp += b[j];
            }
    }
    // cout << atmp << endl
    //  << btmp << endl;
    int tmp = 0;
    // int d = 0;
    for (int i = atmp.length() - 1, j = btmp.length() - 1; i >= 0 || j >= 0; i--, j--)
    {
        int sum = 0;
        if (i >= 0 && j >= 0)
        {
            sum += atmp[i] - '0' + btmp[j] - '0' + tmp;
            if (sum / 10 == 1)
            {
                tmp = 1;
            }
            else
                tmp = 0;
        }
        else if (j >= 0)
        {
            sum += btmp[j] - '0' + tmp;
            if (sum / 10 == 1)
            {
                tmp = 1;
            }
            else
                tmp = 0;
        }
        else if (i >= 0)
        {
            sum += atmp[i] - '0' + tmp;
            if (sum / 10 == 1)
            {
                tmp = 1;
            }
            else
                tmp = 0;
        }
        string anstmp;
        stringstream ss;
        ss << sum % 10;
        ss >> anstmp;
        answer += anstmp;
    }
    if (tmp == 1)
    {
        answer += '1';
    }
    reverse(answer.begin(), answer.end());
    if (answer == "")
        cout << 0 << endl;
    else
        cout << answer << endl;

    return 0;
}