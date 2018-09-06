#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(n == 0 && m == 0)
            break;
        vector<int> s;
        for(int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            s.push_back(tmp);
        }
        s.push_back(m);
        sort(s.begin(), s.end());
        for(int i = 0; i <= n; i++)
        {
            if(i)
                cout << " ";
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
