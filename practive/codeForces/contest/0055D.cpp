#include <bits/stdc++.h>
using namespace std;

int dp[10][18];
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
    }
    return 0;
}

class person
{
private:
    string name;
    string loving;
public:
    void setName(string name){this.name=name;}
    void setLoving(string loving){this.loving=loving;}
} persons[15];

for (int i = 1; i <= 10; ++i)
{
    persons[i].setName("阳OO"+('0'+i));
    persons[i].setLoving("阳OO"+('0'+i)+"喜欢傻蛋^(*￣(oo)￣)^");
}
