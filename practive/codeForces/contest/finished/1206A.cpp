#include <iostream>
#include <cstring>
#include <set>
using namespace std;

bool v[405];
int a[105], b[105];

int main()
{
    for(int i = 1; i <= 400; i++)
        v[i] = 1;
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        v[a[i]] = 0;
    }
    int m; cin >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> b[i];
        v[b[i]] = 0;
    }
    bool flag = false;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            if(v[a[i] + b[j]])
            {
                cout << a[i] << " " << b[j] << endl;
                flag = true;
                break;
            }
        if(flag)
            break;
    }
    
    return 0;
}