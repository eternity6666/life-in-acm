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

map<string, node> m;

int main()
{
    freopen("in.txt", "r", stdin);
    string s1, s2;
    int n;
    cin >> s1 >> s2 >> n;

    fei(1, n)
    {
        string tmp;
        node tmp2;
        cin >> tmp >> tmp2.data >> tmp2.next;
        m[tmp] = tmp2;
    }
    
    string tmp = s1;
    string ans;
     bool flag = 0;
    while(tmp != "-1")
    {
        string tmp2 = s2;
        while(tmp2 != "-1")
        {
            if(tmp2 == tmp)
            {
                flag = 1; 
                break;
            }
            tmp2 = m[tmp2].next;
            if(tmp2 == s2)
                break;
        }
        if(flag)
        {
            ans = tmp;
            break;
        }
        tmp = m[tmp].next;
        if(tmp == s1)
            break;
    }
    if(flag)
        cout << m[ans].data << " " << m[ans].next << endl;
    else
        cout << -1 << endl;
    return 0;
}


