#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

struct node
{
    int a;
    vector<int> ve;
    int x;
}no[maxn];
bool v[maxn];
int n;

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    queue<int> q;
    fei(1, n)
    {
        cin >> no[i].a;
        no[i].a *= 10;
        no[i].x = 0;
        q.push(i);
    }
    int x = 0;
    int syg = 0;
    while(!q.empty())
    {
        int tmp = q.front();
        q.pop();
        if(no[tmp].x < no[tmp].a)
        {
            if(syg == tmp)
                x += 2;
            else
                x++;
            no[tmp].ve.push_back(x);
            syg = tmp;
            no[tmp].x++;
            q.push(tmp);
        }
    }

    /*
    for(int i = 1; i <= sum; i++)
    {
        
    }
    */

    fei(1, n)
    {
        cout << "#" << i << endl;
        int tmp = 0;
        vector<int>::iterator it;
        for(it = no[i].ve.begin(); it != no[i].ve.end(); it++)
        {
            if(tmp % 10 == 0)
                cout << *it;
            else
                cout << " " << *it;
            tmp++;
            if(tmp % 10 == 0)
                cout << endl;
        }
        // cout << endl;
    }
    return 0;
}


