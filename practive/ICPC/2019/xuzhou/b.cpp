/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    set<int> se;
    for(int i = 1; i <= n; i++)
        se.insert(i);
    while(q--)
    {
        int z, x; scanf("%d%d", &z, &x);
        if(z==1)
        {
            set<int>::iterator sit = se.find(x);
            if(sit != se.end())
                se.erase(sit);
        }
        else
        {
            set<int>::iterator sit;
            sit = se.lower_bound(x);
            cout << *sit << endl;
        }
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

vector<int> ve;

int main()
{
    int n, q; scanf("%d%d", &n, &q);
    for(int i = 0; i < n; ++i)
        ve.push_back(i+1);
    while(q--)
    {
        int x, z; scanf("%d%d", &z, &x);
        if(z == 1)
        {
            int old = ve[x-1];
            for(int tmp = x - 1; tmp >= 0; tmp--)
                if(ve[tmp] == old)
                    ve[tmp] = ve[tmp+1];
                else
                    break;
        }
        else
            cout << ve[x-1] << endl;
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

vector<int> ve(1e9+3);
int n, q, z, x;

int findx(int x)
{
    return x ==  ve[x] ? x : ve[x] = findx(ve[x]);
}

void merge(int x)
{
    ve[x] = findx(x+1);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(); cout.tie();
    cin >> n >> q;
    for(int i = 0; i <= n; i++) ve.push_back(i);
    while(q--)
    {
        cin >> z >> x;
        if(z==1)
            merge(x);
        else
            cout << findx(x) << endl;
    }    
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

set<int> se;
int n, q;

int findx(int x)
{

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> q;
    while(q--)
    {
        int x, z; cin >> z >> x;
        if(z==1)
            se.insert(x);
        else
            cout << findx(x) << endl;
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int n, q, z, x;
map<int, int> ma;

int findx(int x)
{
    return ma[x] == 0 ? x : ma[x] = findx(ma[x]);
}

int main()
{
    scanf("%d%d", &n, &q);
    while(q--)
    {
        scanf("%d%d", &z, &x);
        if(z==1)
            ma[x] = findx(x+1);
        else
            printf("%d\n", findx(x));
        // map<int, int>::iterator it;
        // for(it = ma.begin(); it != ma.end(); it++)
        //     cout << it->first << ": " << it->second << endl;
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int n, q, z, x;

int main()
{
    cin >> n >> q;
    set<int> se;
    for(int i = 0; i <= n; ++i)
        se.insert(i);
    while(q--)
    {
        scanf("%d%d", &z, &x);
        if(z==1)
            se.erase(x);
        else
            cout << *(se.lower_bound(x)) << endl;
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

}
