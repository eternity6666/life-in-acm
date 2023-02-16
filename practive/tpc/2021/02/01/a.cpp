#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    int num;
    int a, b, c;
    int level;
};

bool cmp(node a, node b)
{
    return a.c > b.c;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<node> ve(n);
        for(int i = 0; i < n; ++i)
        {
            ve[i].num = i;
            cin >> ve[i].a;
        }
        for(int i = 0; i < n; ++i)
        {
            cin >> ve[i].b;
            if(i == 0) 
                ve[i].c = ve[i].a + ve[i].b;
            else
                ve[i].c = ve[i].a;
        }
        sort(ve.begin(), ve.end(), cmp);
        ve[n - 1].level = n;
        for (int i = n - 2; i >= 0; -- i)
        {
            if (ve[i].c == ve[i + 1].c)
                ve[i].level = ve[i + 1].level;
            else
                ve[i].level = ve[i + 1].level + 1;
        }
        for(int i = 0; i < n; ++i)
        {
            if(ve[i].num == 0)
            {
                if(ve[i].level >= k)
                    cout << "Yes\n";
                else
                    cout << "No\n";
            }
        }
    }
    return 0;
}

