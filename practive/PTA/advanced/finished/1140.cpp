#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;
    n = n - 1;
    while (n--)
    {
        // cout << s << endl;
        int len = s.size();
        string tmp = "";
        char c;
        int count = 0;
        for (int i = 0; i < len; ++i)
        {
            if (i == 0)
            {
                c = s[i];
                count++;
                continue;
            }
            if (c == s[i])
                count++;
            else
            {
                if (s[i] == ' ')
                    continue;
                tmp = tmp + c;
                tmp += count + '0';
                c = s[i];
                count = 1;
            }
        }
        tmp = tmp + c;
        tmp += count + '0';
        s = tmp;
    }
    cout << s << endl;
    return 0;
}