#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
const int maxn = 400 + 5;
typedef long long ll;
ll nn[maxn];
int n, k, p, m;
ll getp(int i)
{
    ll ans = 1;
    for (int j = 0; j < p; ++j)
        ans *= i;
    return ans;
}

ll maxSum = 0;
bool flag = false;
stack<int> st, ansSt;
void dg(ll i, ll sum, ll factors)
{
    if (sum > n)
        return;
    if (i == k)
    {
        if (sum == n)
        {
            flag = true;
            if (maxSum < factors)
            {
                maxSum = factors;
                ansSt = st;
            }
        }
        return;
    }
    for (int j = 1; j <= m; ++j)
    {
        if (sum + nn[j] <= n)
        {
            st.push(j);
            dg(i + 1, sum + nn[j], factors + j);
            st.pop();
        }
        else
            break;
    }
}

int main()
{
    cin >> n >> k >> p;
    for (int i = 0; i <= n; ++i)
    {
        nn[i] = getp(i);
        if (nn[i] > n)
        {
            m = i - 1;
            break;
        }
    }
    dg(0, 0, 0);
    if (flag == false)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    printf("%d = ", n);
    while (!ansSt.empty())
    {
        int temp = ansSt.top();
        ansSt.pop();
        printf("%d^%d", temp, p);
        if (ansSt.empty())
            cout << endl;
        else
            cout << " + ";
    }
    return 0;
}