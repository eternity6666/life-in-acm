#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 30;

int n;
int a[maxn];

struct node
{
    int a[maxn];
    int value;
    int max;
};

/*
void show(node tmp)
{
    fadd(i, 1, 26)
        cout << tmp.a[i] << " ";
    cout << endl;
}
*/

long long deal()
{
    queue<node> q;
    fadd(i, 1, 26)
    {
        if(a[i] > 0)
        {
            node tmp;
            fadd(j, 1, 26)
                if(j != i)
                    tmp.a[j] = 0;
            tmp.a[i] = 1;
            tmp.value = i;
            tmp.max = i;
            q.push(tmp);
        }
    }

    long long ans = 0;
    while(!q.empty())
    {
        node tmp = q.front();
        q.pop();

        if(tmp.value <= 50)
        {
            ans++;
           // show(tmp);
            fadd(i, tmp.max, 26)
            {
                if(a[i] > tmp.a[i])
                {
                    node tmp2 = tmp;

                    tmp2.max = i;
                    tmp2.value += i;
                    tmp2.a[i]++;
                    q.push(tmp2);
                }
            }
        }
    }
    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);
    scanf("%d", &n);
    while(n--)
    {
        fadd(i, 1, 26)
            scanf("%d", &a[i]);
        cout << deal() << endl;
    }
    return 0;
}


