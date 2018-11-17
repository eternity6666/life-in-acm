#include <iostream>
#include <vector>
#include <set>
#define usefre

using namespace std;
const int maxn = 10000 + 5;
int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif

    int n, m;
    while(scanf("%d %d", &n, &m) == 2)
    {
        set<int> a;
        a.clear();
        for(int i = 1; i <= n; i++)
        {
            a.insert(i);
        }
        vector<int> b;
        b.clear();
        for(int i = 1; i <= m; i++)
        {
            int tmp;
            cin >> tmp;
            b.push_back(tmp);
            a.erase(tmp);
        }
        // set<int>::reverse_iterator its;
        set<int>::iterator its;
        vector<int>::iterator itv;
        // its = a.rbegin();
        itv = b.begin();
        its = a.begin();
        while(!b.empty() || !a.empty())
        {
            if(its != a.end() && itv != b.end())
            {
                if(*its > *itv)
                {
                    cout << *itv << endl;
                    itv = b.erase(itv);
                }
                else
                {
                    cout << *its << endl;
                    a.erase(*its);
                    its = a.begin();
                }       
            }
            else if(itv != b.end() && its == a.end())
            {
                cout << *itv << endl;
                itv = b.erase(itv);
            }
            else if(its != a.end() && itv == b.end())
            {
                cout << *its << endl;
                a.erase(*its);
                its = a.begin();
            }
            /*
            if(its != a.rend() && itv != b.end())
            {
                if(*its > *itv)
                {
                    cout << *itv << endl;
                    itv = b.erase(itv);
                }
                else
                {
                    cout << *its << endl;
                    a.erase(*its);
                }
            }
            */
        }
    }
    return 0;
}
