#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;
int n, g, k;

struct node
{
    string name;
    int score;
};

bool operator < (node a, node b)
{
    if(a.score != b.score)
        return a.score > b.score;
    else
        return a.name < b.name;
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n >> g >> k;
    set<node> se;
    int ans1 = 0;
    fei(1, n)
    {
        node tmp;
        cin >> tmp.name >> tmp.score;
        if(tmp.score >= g)
            ans1 += 50;
        else if(tmp.score >= 60)
            ans1 += 20;
        se.insert(tmp);
    }

    cout << ans1 << endl;
    int x = 0;
    int tmp = 0;
    int x2 = 1;
    set<node>::iterator it = se.begin();
    while(1)
    {
        node tmp2 = *it;
        if(tmp2.score != tmp)
        {
            x = x2;
        }
        if(x > k)
            break;
        x2++;
        tmp = tmp2.score;
        cout << x << " " << tmp2.name << " " << tmp2.score << endl;
        it++; 
        if(it == se.end())
            break;
    }
    return 0;
}


