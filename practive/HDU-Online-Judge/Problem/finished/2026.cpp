#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    freopen("in.txt", "r", stdin);
    string s;
    while(getline(cin, s))
    {
        bool flag = 1;
        for(int i = 0; i < s.size(); i++)
        {
            if(flag)
            {
                cout << (char)(s[i] - 'a' + 'A');
                flag = 0;
            }
            else
                cout << s[i];
            if(s[i] == ' ')
                flag = 1;
        }
        cout << endl;
    }
    return 0;
}
