#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    bool flag = 1;
    int count = 0;
    for (int i = 0; i < len; ++i)
    {
        if (count == 0)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                count++;
            else
                flag = 0;
        }
        if (count % 2 == 0)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                count++;
        }
        else
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                count++;
        }
        if (count > 4)
            flag = 0;
        if (flag == 0)
            break;
    }
    if (count != 4)
        flag = 0;
    if (flag)
        cout << "yes\n";
    else
        cout << "no\n";
    return 0;
}