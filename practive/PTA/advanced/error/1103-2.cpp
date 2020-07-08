#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;
const int maxn = 400 + 5;
int n, k, p;
bool flag = false;
int maxFa = 0;
stack<int> st, ansSt;

void dg(int num, int sum, int factors)
{
    if (sum > n || num > k)
        return;
    if (num == k)
    {
        if (sum == n)
        {
            flag = true;
            if (maxFa < factors)
            {
                maxFa = factors;
                ansSt = st;
            }
        }
        return;
    }
    int m = floor(sqrt(n - sum));
    for (int j = m; j >= 1; --j)
    {
        int tmp = pow(j, p);
        if (sum + tmp <= n)
        {
            st.push(j);
            dg(num + 1, sum + tmp, factors + j);
            st.pop();
        }
    }
}

int main()
{
    cin >> n >> k >> p;
    dg(0, 0, 0);
    if (!flag)
    {
        cout << "Impossible\n";
        return 0;
    }
    stack<int> ansTmp;
    while (!ansSt.empty())
    {
        int tmp = ansSt.top();
        ansSt.pop();
        ansTmp.push(tmp);
    }
    printf("%d = ", n);
    while (!ansTmp.empty())
    {
        int temp = ansTmp.top();
        ansTmp.pop();
        printf("%d^%d", temp, p);
        if (ansTmp.empty())
            cout << endl;
        else
            cout << " + ";
    }
    return 0;
}