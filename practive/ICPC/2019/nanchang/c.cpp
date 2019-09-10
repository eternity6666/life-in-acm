#include <iostream>
using namespace std;
const int maxn = 2e5 + 10;

int main()
{
    int n, q;
    cin >> n >> q;
    string s; cin >> s;
    set<int> se8, se9, se1, se0, se2;
    int len1 = se1.size();
    int len0 = se0.size();
    int len2 = se2.size();
    int len8 = se8.size();
    int len9 = se9.size();
    for(int i = 0; i < n; ++i)
    {
        if(s[i] == '9')
            se9.insert(i+1);
        if(s[i] == '8')
            se8.insert(i+1);
        if(s[i] == '0')
            se0.insert(i+1);
        if(s[i] == '2')
            se2.insert(i+1);
        if(s[i] == '1')
            se1.insert(i+1);
    }
    while(q--)
    {
        int l, r; cin >> l >> r;
        if(len1 ==0 || len2 == 0 || len9 == 0 || len1 == 0)
        {
            cout << -1 << endl;
            continue;
        }

    }
    return 0;
}
