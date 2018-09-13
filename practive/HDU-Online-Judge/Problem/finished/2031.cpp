#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    char al[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int N, R;
    while(cin >> N >> R)
    {
        if(N < 0)
        {
            cout << '-';
            N = -N;
        }
        stack<char> ans;
        while(N > 0)
        {
            int tmp = N % R;
            char c;
            if(tmp < 10)
                c = '0' + tmp;
            else
                c = al[tmp - 10];
            ans.push(c);
            N = N / R;
        }
        while(ans.size() > 0)
        {
            cout << ans.top();
            ans.pop();
        }
        cout << endl;
    }
    return 0;
}
