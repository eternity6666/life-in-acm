#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

struct node
{
    int data;
    string next;
};

map<string, node> ma;
string st, ed;
int n; 
vector<string> v1, v2;

int main()
{
    freopen("in.txt", "r", stdin);
    
    cin >> st >> ed;
    cin >> n;

    fei(1, n)
    {
        string tmp1;
        node tmp2;
        cin >> tmp1 >> tmp2.data >> tmp2.next;
        ma[tmp1] = tmp2;
    }
    string tmp = st;
    v1.push_back(st);
    do
    {
        tmp = ma[tmp].next;
        v1.push_back(tmp);
    }while(tmp != "-1" && tmp != st);
    reverse(v1.begin(), v1.end());
    // cout << 1 << endl;

    tmp = ed;
    v2.push_back(ed);
    do
    {
        tmp = ma[tmp].next;
        v2.push_back(tmp);
    }while(tmp != "-1" && tmp != ed);
    reverse(v2.begin(), v2.end());
    // cout << 2 << endl;

    vector<string>::iterator it1, it2;

    it1 = v1.begin();
    it2 = v2.begin();

    if(*it1 != *it2)
        cout << "-1" << endl;
    else
    {
        bool flag = 0;
        for(;it1 != v1.end() && it2 != v2.end();)
        {
            if(*it1 == *it2)
            {
                it1++;
                it2++;
            }
            else
            {
                flag = 1;
                break;
            }
            // cout << 3 << endl;
        }
        if(flag)
            cout << ma[*(it2 - 1)].data << " " << ma[*(it2 - 1)].next << endl;
        else
        {
            if(it1 == v1.end())
                cout << ma[*(it2 - 1)].data << " " << ma[*(it2 - 1)].next << endl;
            else
                cout << ma[*(it1 - 1)].data << " " << ma[*(it1 - 1)].next << endl;
        }
    }

    return 0;
}


