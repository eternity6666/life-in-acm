#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;
void swap(int &a,int &b)
{
    a=a^b;
    b=b^a;
    a=a^b;
}
int main()
{
    int a = 457, b = 456, c = 23;
    swap(a, b);
    cout << a << b << endl;
    freopen("in.txt", "r", stdin);

    return 0;
}

