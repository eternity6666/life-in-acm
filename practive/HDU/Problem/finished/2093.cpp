#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;

const int maxn = 1e6 + 5;

struct node
{
    string name;
    int score = 0;
    int time = 0;
};

int n, m;
vector<node> ve;

bool cmp(node a, node b)
{
    if(a.score != b.score)
        return a.score > b.score;
    else if(a.time != b.time)
        return a.time < b.time;
    else
        return a.name < b.name;
}

int main()
{
    freopen("in.txt", "r", stdin);
    scanf("%d %d", &n, &m);
    string name;
    while(cin >> name)
    {
        node tmp;
        tmp.name = name;
        fadd(i, 1, n)
        {
            int a;
            cin >> a;
            if(a > 0)
            {
                char c = getchar();
                tmp.score++;
                tmp.time += a;
                if(c == '(')
                {
                    int b;
                    cin >> b;
                    tmp.time = tmp.time + b * m;
                    cin >> c;
                }
            }
        }
        ve.push_back(tmp);
    }

    sort(ve.begin(), ve.end(), cmp);
    vector<node>::iterator it;
    for(it = ve.begin(); it != ve.end(); it++)
    {
        node tmp = *it;
        cout << tmp.name;
        fadd(i, tmp.name.length(), 9)
            cout << ' ';
        cout << ' ';
        if(tmp.score < 10)
            cout << ' ';
        cout << tmp.score << ' ';
        stringstream ss;
        string tmp2;
        ss << tmp.time;
        ss >> tmp2;
        fadd(i, tmp2.length(), 3)
            cout << ' ';
        cout << tmp.time << endl;
    }
    return 0;
}

