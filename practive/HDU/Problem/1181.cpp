#include <iostream>
#include <cstring>
using namespace std;

bool a[30][30];
int s, e;

void floyd()
{
    for(int k = 1; k <= 26; k++)
        for(int i = 1; i <= 26; i++)
            for(int j = 1; j <= 26; j++)
                if(a[i][k] && a[k][j])
                    a[i][j] = 1;
}

int main()
{
    memset(a, 0, sizeof(a));
    string str;
    s = 'b' - 'a';
    e = 'm' - 'a';
    while(cin >> str && str != "0")
    {
        int len = str.length();
        a[str[0] - 'a'][str[len-1] - 'a'] = 1;
    }
    floyd();
    cout << (a[s][e]?"Yes.":"No.") << endl;
    return 0;
}
