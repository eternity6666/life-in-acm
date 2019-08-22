#include <iostream>
#include <set>
#include <utility>
using namespace std;
const int maxn = 60;
typedef pair<int, int> P;
int n, m;

int a[maxn][maxn];
int b[maxn][maxn];

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            b[i][j] = 0;
        }
    set<P> se;
    for(int i = 1; i < n; i++)
        for(int j = 1; j < m; j++)
            if(a[i][j]&&a[i][j+1]&&a[i+1][j]&&a[i+1][j+1])
                if(b[i][j]==0||b[i+1][j]==0||b[i][j+1]==0||b[i+1][j+1]==0)
                {
                    b[i][j]=b[i+1][j]=b[i][j+1]=b[i+1][j+1]=1;
                    se.insert(P(i,j));
                }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(a[i][j]!=b[i][j])
            {
                cout << -1 << endl;
                return 0;
            }
    cout << se.size() << endl;
    set<P>::iterator it;
    for(it = se.begin(); it != se.end(); it++)
        cout << (*it).first << " " << (*it).second << endl;
    return 0;
}