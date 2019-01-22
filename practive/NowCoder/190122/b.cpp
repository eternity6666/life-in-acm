#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100000 + 5;

int yy(int a)
{
    return a * a;
}
int a[maxn];
int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n))
    {
        long long sum = 0;
        fei(1, n)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        queue<int> q;
        q.push(0);
        for(int i = 1, j = n; i <= j; i++, j--)
        {
            if(i != j)
            {
                q.push(a[j]);
                q.push(a[i]);
            }
            else
                q.push(a[i]);
        }
        int tmp = 0;
        while(!q.empty())
        {
            //cout << q.front() << endl;
            sum += yy(tmp - q.front());
            tmp = q.front();
            q.pop();
        }
        cout << sum << endl;
    }
    return 0;
}

