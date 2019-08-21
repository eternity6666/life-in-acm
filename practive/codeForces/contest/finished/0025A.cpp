#include <iostream>
using namespace std;
int a[110];
int v[110];
int main()
{
    int n; cin >> n;
    int x=0, y=0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(a[i]%2) x++;
        else y++;
    }
    if(x<y){for(int i=1; i<=n; i++) if(a[i]%2==1) {cout<<i<<endl;break;}}
    else{for(int i=1; i<=n; i++) if(a[i]%2==0) {cout<<i<<endl;break;}}
    return 0;
}