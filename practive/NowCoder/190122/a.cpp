#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

struct node
{
    int opt;
    long long x;
};
int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    long long x;
    while(~scanf("%d %lld", &n, &x))
    {
        stack<node> s;
        node tmp;
        while(n--)
        {
            cin >> tmp.opt >> tmp.x;
            s.push(tmp); 
        }
        while(!s.empty())
        {
            tmp = s.top();
            s.pop();
            switch(tmp.opt)
            {
            case 1:
                x -= tmp.x;
                break;
            case 2:
                x += tmp.x;
                break;
            case 3:
                x /= tmp.x;
                break;
            case 4:
                x *= tmp.x;
            }
        }
        cout << x << endl;
    }
    return 0;
}

