#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;
const int mod = 1000000007;

struct node {
    int a, b;
    int level;
};
struct node2 {
    int a, b;
};
bool operator < (node2 a, node2 b)
{
    if(a.a != b.a)
        return a.a < b.a;
    else
        return a.b < b.b;
}


int get(int a, int b)
{
    return a^b;
}

int main()
{
    freopen("in.txt", "r", stdin);
    /*
    int aa = 1;
    int bb = 3;
    cout << get(aa, bb) << endl;
    */
    int t;
    cin >> t;
    int n;
    cin >> n;
    vector<int> array;
    fei(1, n)
    {
        int tmp;
        cin >> tmp;
        array.push_back(tmp);
    }
    int q;
    cin >> q;
    while(q--)
    {
    int a,b;
    while(cin >> a >> b) 
    {
        cout << a << "  " << b << endl;
        queue<node> qu;
        node s;
        s.a = a;
        s.b = b;
        s.level = 1;
        qu.push(s);
        vector<int> ve;
        // map<node2, int> ma;
        while(!qu.empty())
        {
            s = qu.front();
            /*
            node2 ss;
            ss.a = s.a;
            ss.b = s.b;
            ma[ss] = 0;
            */
            if(s.level <= 2)
            {
                node tmp2;
                fei(s.a, s.b)
                    fej(i, s.b)
                    {
                        tmp2.a = i;
                        tmp2.b = j;
                        tmp2.level = s.level + 1;
                        qu.push(tmp2);
                    }
            }
            else
            {
                fei(s.a, s.b)
                    ve.push_back(i); 
            }
            qu.pop();
        }
        
        vector<int>::iterator it;
        sort(ve.begin(), ve.end());
        /*
        for(it = ve.begin(); it != ve.end(); it++)
            cout << *it << " ";
        cout << endl;
        */
        int x = 0;
        int old = *(ve.begin());
        int ans = 0;
        for(it = ve.begin(); it != ve.end(); it++)
        {
            if(*it != old)
            {
                if(x % 2)
                {
                    cout << old << ":";
                    ans = get(ans, old);
                }
                old = *it;
                x = 1;
            }
            else
                x++;
        }
        if(x % 2)
        {
            cout << old << ":";
            ans = get(ans, old);
        }
        cout << endl;
        cout << ans << endl;
        cout << endl;
        /*
        while(!qu.empty())
        {
            s = qu.front();
            node2 ss;
            ss.a = s.a;
            ss.b = s.b;
            ma[ss]++;
            // cout << s.a << ":" << s.b << endl;
            qu.pop();
        }

        vector<int> se;
        map<node2, int>::iterator it;
        for(it = ma.begin(); it != ma.end(); it++)
        {
        
            if((*it).second % 2 == 1)
            {
                // cout << (*it).first.a << ":" << (*it).first.b << endl;
            fei((*it).first.a, (*it).first.b)
                    se.push_back(i);
            // }   
        }
        vector<int>::iterator sit;
        for(sit = se.begin(); sit != se.end(); sit++)
            cout << *sit << ":";
        cout << endl;
        */
    }
    }
    return 0;
}


