#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    int len = s.length();
    string tmp = "";
    for(int i = len - 1; i > 0; i-=2)
        tmp = (char)('0'+(s[i]-'0')*1+(s[i-1]-'0')*2) + tmp;
    if(len%2==1) tmp = s[0] + tmp;
    // cout << tmp << endl;
    len = tmp.length();
    bool flag = 1;
    for(int i = 1; i < len; i++)
        if(tmp[i]!='0')
        {
            flag = 0;
            break;
        }
    flag &= tmp[0]<='1';
    cout << len - flag << endl;
    return 0;
}
