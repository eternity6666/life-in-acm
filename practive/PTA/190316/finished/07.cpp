#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    int pa, pb;
    cin >> pa >> pb;
    int a, b, c;
    cin >> a >> b >> c;
    int x, y;
    x = y = 0;
    if(a == 1)
        x++;
    else
        y++;
    if(b == 1)
        x++;
    else
        y++;
    if(c == 1)
        x++;
    else
        y++;

    cout << "The winner is ";
    if(pa > pb && y >= 1)
        cout << "a: " << pa << " + " << y << endl;
    else
        cout << "b: " << pb << " + " << x << endl;
    return 0;
}


