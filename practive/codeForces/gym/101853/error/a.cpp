#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100000 + 5;

double t;
double n, q;
vector<double> ve;

double deal();
int main()
{
    // freopen("in.txt", "r", stdin);
    cin >> t;
    while(t--)
    {   
        cin >> n >> q;
        fei(1, n)
        {
            double tmp;
            cin >> tmp;
            ve.push_back(tmp);
        }
        fei(1, q)
        {
            double code;
            cin >> code;
            if(code == 1)
            {
                double p, v;
                cin >> p >> v;
                ve[p - 1] = v;
            }
            else
                cout << deal() << endl;
        }
    }
    return 0;
}


double deal()
{
    set<double> se;
    vector<double>::iterator vit;
    for(vit = ve.begin(); vit != ve.end(); vit++)
        if(*vit != 0)
            se.insert(*vit);
    return se.size();
}

// multiset<int> mu;
// int array[maxn];

/*
int deal()
{
    multiset<int> mu;
    vector<int>::iterator vit;
    for(vit = ve.begin(); vit != ve.end(); vit++)
        if(*vit != 0)
            mu.insert(*vit);

    int len = mu.size();
    int x = 0;
    int ans = 0;
    while(x < len)
    {
        ans++;
        int tmp = ;
        // bool flag = true;
        fei(x, len - 1)
        {
            mu[i] -= tmp;
            if(mu[i] == 0)
                x++;
        }
  //      
        bool flag = 1;
        int tmp2 = x;
        multiset<int>::iterator muit;
        fei(1, x)
            muit++;
        int tmp = *muit;
        for(; muit != mu.end(); muit++)
        {
            *muit = (*muit - tmp);
            tmp2++;
            if(*muit != 0 && flag)
            {
                flag = 0;
                x = tmp2;
            }
        }
        
    }
    return ans;
}
*/
