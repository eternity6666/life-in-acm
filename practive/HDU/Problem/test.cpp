#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long ans = 1;
    for(int i = 1; i <=20; i++)
    {
        ans = ans * i;
        cout << ans << endl;
    }
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    while(1)
    {
        c = getchar();
        cout << c;
    }
    return 0;
}
*/

/*
//can't
#include <iostream>
using namespace std;
int main()
{
    long long a = 1;
    for(int i = 1; i <= 20; i++)
    {
        a = a * 26;
        cout << a << endl;
    }
    return 0;
}
*/

/*
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct node{
    string name;
    int a;
    int b;
};
bool node::operator == (const string &a)
{
    return (this->name == a);
}
int main()
{
    vector<node> v;
    string str = "hello";
    vector<node>::iterator it = find(v.begin(), v.end(), str);
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    freopen("in.txt", "r", stdin);
    char a[10];
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if(a[i] == '?')
            continue;
        else
            sum = sum + (a[i] - '0') * (10 - i);
    }
    cout << sum << endl;
    return 0;
}
*/
