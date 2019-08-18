// #include <iostream>
// #include <set>
// using namespace std;
// const int maxm = 1e6 + 10;
// const int maxn = 1010;

// int sa[maxn];
// int sb[maxn];

// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
//     int t; cin >> t;
//     while(t--)
//     {
//         int n; cin >> n;
//         long long ans = 0;
//         int len = 0;
//         for(int i = 0; i < n; i++)
//         {
//             int a, b; cin >> a >> b;
//             if(i == 0)
//                 for(int j = a; j <= b;j ++)
//                     sa[len++] = j;
//             else
//             {
//                 long long min = maxm; int len2 = 0;
//                 for(int j = 0; j < len; j++)
//                 {
//                     for(int k = a; k <= b; k++)
//                     {
//                         int x = (sa[j]>k?sa[j]:k);
//                         int y = (sa[j]>k?k:sa[j]);
//                         int tmp = (x-y)/2+(x-y)%2;
//                         if(tmp<min) len2 = 0, sb[len2++] = k, min = tmp;
//                         else if(tmp == min) sb[len2++] = k;
//                     }
//                 }
//                 for(int j = 0; j < len2; j++)
//                     sa[j] = sb[j];
//                 len = len2;
//                 ans += min;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n == 1)
            cout << 1 << endl;
        else
        {
            long long ans = 0;
            int oa, ob; cin >> oa >> ob; 
            n--;
            for(int i = 0; i < n; i++)
            {
                long long tmp = 0;
                int a, b; cin >> a >> b;
                if(ob<a) tmp = (a-ob)/2+(a-ob)%2, oa = ob = a;
                else if(oa<a) tmp = 0, oa = a;
                else if(ob<b) tmp = 0;
                else if(oa<b) tmp = 0, ob = b;
                else tmp = (oa-b)/2+(oa-b)%2, oa=ob=b;
                ans += tmp;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
