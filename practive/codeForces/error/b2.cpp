#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

struct node{
    int a;
    char c;
};

int t, n;
vector<node> ve;
vector<node> vef, vem;

map<int, bool> ma;
int gcd(int a, int b);
int deal();

int main()
{
    freopen("in.txt", "r", stdin);

    cin >> t;
    while(t--)
    {
        cin >> n;
        ve.clear();
        vef.clear();
        vem.clear();
        fei(1, n)
        {
            node tmp;
            cin >> tmp.a;
            ma[tmp.a] = 0;
            tmp.c = ' ';
            ve.push_back(tmp);
        }
        fei(1, n)
        {
            cin >> ve[i - 1].c;
            if(ve[i - 1].c == 'F')
                vef.push_back(ve[i - 1]);
            else
                vem.push_back(ve[i - 1]);
        }
        cout << deal() << endl;
    }
    return 0;
}

int deal() 
{
    vector<node>::iterator int;
}

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

