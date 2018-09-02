#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
using namespace std;
struct node{
    int scores;
    int goals;
    string win[maxn];

};
int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        map<string, node> c;
        string t1, t2;
        int p, q;
        for(int i = 0; i < n * (n - 1); i++)
        {
            scanf("%s VS %s %d:%d", &t1, &t2, &p, &q);
            if(c.find(t1) != c.end())
            {
                c[t1].goals += p;
                if(p > q)
                    c[t1].scores += 3;
                else if(p == q)
                    c[t1].scores += 1;
                else
                    c[t1].scores += 0;
            }
            else
            {
                node tmp;
                tmp.scores = get_score(p, q);
                tmp.goals = p;

                c[t1] = tmp;
            }
            if(c.find(t2) != c.end())
            {
                c[t2].goals += q;
            }
        }
    }
    return 0;
}
