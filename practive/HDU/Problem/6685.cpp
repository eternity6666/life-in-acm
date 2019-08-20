/*
#include <iostream>
using namespace std;
const int maxn = 1e9 + 10;
int aa[5] = {10, 20, 50, 100};
int b[5];
int w[110];

bool able(int l)
{
    for(int i = 0; i <= b[0]; i++)
        for(int j = 0; j <= b[1]; j++)
            for(int k = 0; k <= b[2]; k++)
                if(l == (i*aa[0]+j*aa[1]+k*aa[2]))
                    return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        bool flag = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> w[i];
            if(w[i]%10!=0) flag = 1;
        }
        if(flag)
            cout << -1 << endl;
        else
        {
            int ans = maxn;
            b[3] = 0;
            for(int i = 0; i < n; i++) b[3] = b[3]>w[i]/100?b[3]:w[i]/100; 
            for(int i = 0; i <= 1; i++)
                for(int j = 0; j <= 2; j++)
                    for(int k = 0; k <= 1; k++)
                    {
                        b[0] = i, b[1] = j, b[2] = k;
                        flag = true;
                        for(int l = 0; l < n; l++)
                            if(!able(w[l]%100))
                            {
                                flag = false;
                                break;
                            }
                        if(flag)
                            ans = ans<i+j+k?ans:i+j+k;
                    }
            ans+=b[3];
            cout << ans << endl;
        }
    }
    return 0;
}
*/
/*
10: 10
20: 20
30: 10 20
40: 20 20
50: 50
60: 10 50
70: 20 50
80: 10 20 50
90: 20 20 50
*/
/*
60: 10 50
40: 20 20
*/

#include <iostream>
using namespace std;

int b[5];
const int a[5]={1, 2, 5, 10};
int w[110];
int n;

bool able(int l)
{
    for(int i = 0; i <= b[0]; i++)
        for(int j = 0; j <= b[1]; j++)
            for(int k = 0; k <= b[2]; k++)
                if(l == a[0]*i + a[1]*j + a[2]*k)
                    return true;
    return false;
}

void solve()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++) 
    {
        if(w[i]%10){cout <<-1 << endl; return;}
        w[i]/=10;
    }
    int ans=1e9;
    for(int i = 0; i <= 1; i++)
        for(int j = 0; j <= 3; j++)
            for(int k = 0; k <= 1; k++)
            {
                bool flag = 1;
                int tmp = ((i==1&&j>=2&&k==1)||(i==0&&j==3&&k==1)?1:0);
                b[0]=i, b[1]=j, b[2]=k, b[3] = 0;
                for(int l = 0; l < n; l++)
                    if(!able(w[l]%10))
                    {flag=0;break;}
                    else
                        b[3]=(b[3]>w[l]/10-tmp)?b[3]:(w[l]/10-tmp);
                // if(i == 1 && j == 2 && k == 1)
                //     cout << flag << b[3] << endl;
                if(flag)
                    ans = ans<(i+j+k+b[3])?ans:(i+j+k+b[3]);
                    // cout << i << j << k << b[3] << endl;
            }
    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
