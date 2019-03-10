#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n, m;
struct node
{
    string name;
    double x;
};
vector<node> vb, vg;

bool operator < (node a, node b)
{
    if(a.x != b.x)
        return a.x < b.x;
    else
        return a.name < b.name;
}

int main()
{
    freopen("in.txt", "r", stdin);
    
    cin >> n >> m;

    fei(1, n)
    {
        node tmp;
        string tmp2;
        cin >> tmp.name >> tmp2 >> tmp.x;
        if(tmp2 == "boy")
            vb.push_back(tmp);
        else
            vg.push_back(tmp);
    }

    sort(vb.begin(), vb.end());
    sort(vg.begin(), vg.end());

    vector<node> ans;
    int iTmp = 0;
    vector<node>::iterator bit, git;

    bit = vb.begin();
    git = vg.begin();

    int i = 0;
    while(bit != vb.end() || git != vg.end())
    {
        if(bit == vb.end())
        {
            ans.push_back(*git);
            git++;
        }
        else if(git == vg.end())
        {
            ans.push_back(*bit);
            bit++;
        }
        else
        {
            if(i % 2)
            {
                ans.push_back(*bit);
                bit++;    
                i++;
            }
            else
            {
                ans.push_back(*git);
                git++;    
                i++;
            }
            if(i == m)
                i = 0;
        }
    }
    
    vector<node>::iterator it;
    i = 0;
    for(it = ans.begin(); it != ans.end(); it++)
    {
        if(i == 0)
            cout << (*it).name;
        else
            cout << " " << (*it).name;
        i++;
        if(i == m)
        {
            i = 0;
            cout << endl;
        }
    }

    return 0;
}


