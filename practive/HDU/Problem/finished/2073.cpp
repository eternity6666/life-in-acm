#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 10000 + 5;


vector<double> tree;
int getId(int x, int y);
void buildTree();

int main()
{
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int n;
    scanf("%d", &n);
    buildTree();
    while(n--)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%.3f\n", abs(tree[getId(x1, y1)] - tree[getId(x2, y2)]));
        // cout << getId(x1, y1) << " " << getId(x2, y2) << endl;
    }
    return 0;
}

void buildTree()
{
    int a, b;
    a = 0;
    b = 0;
    tree.push_back(0);
    int count = 0;
    while(true)
    {
        int n = a + b;
        int tmpa, tmpb;
        if(a == 0 && b == 0)
        {
            tmpa = 0;
            tmpb = 1;
        }
        else if(a == 0)
        {
            tmpa = 1;
            tmpb = b - 1;
        }
        else if(b == 0)
        {
            tmpa = 0;
            tmpb = a + 1;
        }
        else
        {
            tmpa = a + 1;
            tmpb = b - 1;
        }
        double tmp = sqrt((tmpa - a) * (tmpa - a) + (tmpb - b) * (tmpb - b));
        tree.push_back(tree[count] + tmp);
        count++;
        
        if(a == 100 && b == 100)
            break;
        
        a = tmpa;
        b = tmpb;
    }
}

int getId(int x, int y)
{
    int n = x + y;
    /*
    if(n % 2 == 0)
        return n * (n + 1) / 2 + y;
    else
    */
        return n * (n + 1) / 2 + x;
}

