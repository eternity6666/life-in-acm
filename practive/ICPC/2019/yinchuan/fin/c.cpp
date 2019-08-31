#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t; cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n, m;
        cin >> n >> m;
        string a, b, c;
        cin >> a >> b;
        int tmp = b[0] - a[0];
        // cout << tmp << endl;
        map<char, char> ma;
        for(int i = 0; i < 26; i++)
        {
            char x = 'A' + i;
            char y = 'A' + (26 + tmp + i) % 26;
            ma[y] = x;
        }
        // for(int i = 0; i < 26; i++)
        //     cout << char('A' + i) << " ";
        // cout << endl;
        // map<char, char>::iterator it;
        // for(it = ma.begin(); it != ma.end(); it++)
        //     cout << it->second << " ";
        // cout << endl;
        cin >> c;
        printf("Case #%d: ", i);
        for(int i = 0; i < m; i++)
            cout << ma[c[i]];
        cout << endl;
    }
    return 0;
}
