#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 10000 + 5;

int t, n;
int a[maxn];

int main()
{
    // freopen("in.txt", "r", stdin);
    cin >> t;
    while(t--)
    {
        cin >> n;
        fei(1, maxn)
            a[i] = 0;
        fei(1, n)
        {
            int tmp;
            cin >> tmp;
            a[tmp]++;
        }
        int maxx = 0;
        fei(1, 10000)
        {
            if(a[i] + a[i + 1] > maxx)
                maxx = a[i] + a[i + 1];
        }
        cout << maxx << endl;
        /*
        int tmpx = 0;
        if(a[1] + a[2] > maxx)
            maxx = a[1] + a[2];
        if(a[10000] + a[9999] > maxx)
            maxx = a[10000] + a[9999];
        */
        /*
        if(tmpx != 1 && tmp != 10000)
            cout << a[tmpx] + a[tmpx - 1] + a[tmpx + 1] << endl;
        else if(tmpx == 1)
            cout << a[tmpx] + a[tmpx + 1] << endl;
        else
            cout << a[tmpx] + a[tmpx - 1] << endl;
            */
    }
    return 0;
}


