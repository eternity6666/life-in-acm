// 会超时
#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e6+ 5;

int tree[maxn];

bool isI(int i)
{
    stringstream ss;
    ss << i;
    string s;
    ss >> s;
    int len = s.length();
    fadd(i, 0, len - 1)
        if(s[i] == '4')
            return true;
        else if(s[i] == '6' && i != len - 1)
            return s[i + 1] == '2';
    return false;
}

void buildTree()
{
    tree[0] = 0;
    fadd(i, 1, 1e6)
        if(isI(i))
            tree[i] = tree[i - 1];
        else
            tree[i] = tree[i - 1] + 1;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int n, m;
    buildTree();
    while(cin >> n >> m)
    {
        if(n + m == 0)
            break;

        cout << tree[m] - tree[n - 1] << endl;
    }
    
    return 0;
}


