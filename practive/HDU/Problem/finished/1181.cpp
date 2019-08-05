#include <iostream>
#include <cstring>
using namespace std;

bool a[30][30];
int s, e;

void floyd()
{
    for(int k = 0; k <= 25; k++)
        for(int i = 0; i <= 25; i++)
            for(int j = 0; j <= 25; j++)
                if(a[i][k] && a[k][j])
                    a[i][j] = 1;    
}

int main()
{
    string str;
    memset(a, 0, sizeof(a));
    while(cin >> str)
    {
        if(str[0] == '0')
        {
            s = 'b' - 'a';
            e = 'm' - 'a';
            floyd();
            cout << (a[s][e]?"Yes.":"No.") << endl;
            memset(a, 0, sizeof(a));
        }
        else
        {
            int len = str.length();
            a[str[0] - 'a'][str[len-1] - 'a'] = 1;
        }        
    }
    return 0;
}

