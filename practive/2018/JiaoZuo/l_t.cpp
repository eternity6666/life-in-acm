#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000007;

long long n[10];

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        long long N;
        cin >> N;
        if(N == 1)
            cout << 3 << endl;
        else if(N == 2)
            cout << 9 << endl;
        else
        {
            n[1] = n[2] = n[3] = n[4] = n[5] = n[6] = n[7] = n[8] = n[9] = 1;
            for(int i = 3; i <= N; i++)
            {
                long long m[10];
                m[1] = n[4] + n[7];
                m[2] = n[1] + n[7];
                m[3] = n[1] + n[4] + n[7]; 
                m[4] = n[2] + n[5];
                m[5] = n[2] + n[8];
                m[6] = n[5] + n[8];
                m[7] = n[3] + n[6] + n[9];
                m[8] = n[3] + n[9];
                m[9] = n[3] + n[6];
                for(int j = 1; j < 10; j++)
                {
                    n[j] = m[j] % mod;
                    cout << m[j] << " ";
                }
                cout << endl;
            }
            long long sum = 0;
            for(int i = 1; i <= 10; i++)
            {
                sum = sum + n[i];
            }
            cout << sum % mod << endl;
        }
    }

}
