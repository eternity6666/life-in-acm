#include <bits/stdc++.h>
using namespace std;

#define fre freopen("./tmp.txt", "r", stdin)
void out_long(int n, char s);
void out_space(int n, char s);
int main()
{
    // fre;
    int N;
    char C;
    cin >> N >> C;
    int m = (N + 1) / 2;
    for (int i = 0; i < m; i++)
    {
        if (i == 0 || i == m - 1)
        {
            out_long(N, C);
        }
        else
        {
            out_space(N, C);
        }
    }
}
void out_long(int n, char s)
{
    for (int i = 0; i < n; i++)
    {
        cout << s;
    }
    cout << endl;
}

void out_space(int n, char s)
{
    cout << s;
    for (int i = 0; i < n - 2; i++)
    {
        cout << " ";
    }
    cout << s << endl;
}