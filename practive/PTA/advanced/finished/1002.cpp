#include <iostream>
#include <map>
#include <stack>
using namespace std;

struct node
{
    int n;
    double an;
};
map<int, double> ma;
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int n;
        double an;
        cin >> n >> an;
        ma[n] += an;
    }
    cin >> k;
    while (k--)
    {
        int n;
        double an;
        cin >> n >> an;
        ma[n] += an;
    }
    stack<node> qu;
    map<int, double>::iterator mit;
    for (mit = ma.begin(); mit != ma.end(); ++mit)
    {
        if (mit->second != 0)
        {
            node tmp;
            tmp.an = mit->second;
            tmp.n = mit->first;
            qu.push(tmp);
        }
    }
    int len = qu.size();
    cout << len;
    while (!qu.empty())
    {
        node tmp = qu.top();
        qu.pop();
        cout << " " << tmp.n << " " ;
        printf("%.1lf",tmp.an);
    }
    cout << endl;
    return 0;
}