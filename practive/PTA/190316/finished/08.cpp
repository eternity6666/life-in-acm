#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n;
struct node
{ 
    string a;
    int b;
};
double sum = 0;
vector<node> ve;

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    fei(1, n)
    {
        node tmp;
        cin >> tmp.a >> tmp.b;
        ve.push_back(tmp);
        sum += tmp.b;
    }
    sum /= n;
    sum /= 2;
    // cout << sum << endl;
    vector<node>::iterator it;
    double minn = 100000000;
    string ans1;
    int ans2;
    for(it = ve.begin(); it != ve.end(); it++)
    {
        node tmp = *it;
        if(abs(tmp.b - sum) < minn)
        {
            minn = abs(tmp.b - sum);
            ans1 = tmp.a;
        }
    }
    ans2 = (int)sum;
    if(sum < ans2)
        ans2--;
    cout << ans2 << " " << ans1 << endl;
    return 0;
}


