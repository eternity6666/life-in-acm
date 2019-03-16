#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n;
struct node{
    int a;
    vector<int> ve[15];
}no[maxn];
int sum, mi, ma;
set<int> se;

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    sum = 0;
    mi = maxn;
    ma = -maxn;
    fei(1, n)
    {
        cin >> no[i].a;
        se.insert(no[i].a);
    }

    int x = 1;
    int zq = 0;
    set<int>::iterator it2;
    for(it2 = se.begin(); it2 != se.end(); it++)
    {
        fei(x, x + *it2 - zq)
        {
            fej(1, n)
            {
                if(no[j].a < *it)
                    continue;
                else
                {

                }
            }
        }

        /*
        fei(1, n)
        {
            if(no[i].a < *it)
                continue;
            else
            {

            }
        }
        */
    }

    fei(1, n)
    {
        cout << "#" << i << endl;
        node tmp = no[i];
        fej(1, tmp.a)
        {
            vector<int>::iterator it;
            for(it = tmp.ve[j].begin(); it != tmp.ve[j].end(); it++)
            {
                if(it != begin())
                    cout << " " << *it;
                else
                    cout << *it;
            }
            cout << endl;
        }
    }
    return 0;
}


