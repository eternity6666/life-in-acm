#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <fstream>
int c1(int a[]);
int c2(int A[]);
#define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n, ans = 0;
    cin >> n;
    for (int p = 0; p < n; p++)
    {
        int a[15];
        a[14] = 0;
        for (int h = 0; h < 14; h++)
            cin >> a[h];
        sort(a, a + 14);
        if (a[0] == a[1])
            ans = c1(a);
        else
            ans = c2(a);
        if (ans == 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
int c1(int a[])
{
    int b = 0;
    while (b <= 14)
    {
        if (a[b] == a[b + 1] == a[b + 2])
            b = b + 3;
        else if (a[b] == a[b + 1])
        {
            b = b + 2;
        }
        if (b == 14)
            return 1;
    }
    b = 2;
    while (b <= 12)
    {
        if (a[b] == a[b + 1])
            b = b + 2;
        else
            break;
        if (b == 14)
            return 1;
    }
    b = 2;
    while (b <= 11)
    {
        if (a[b + 2] - a[b + 1] == a[b + 1] - a[b] == 1)
            b = b + 3;
        else
            return 0;
        if (b == 14)
            return 1;
    }
    b = 2;
    while (b <= 11)
    {
        if (a[b + 2] == a[b + 1] == a[b])
            b = b + 3;
        else
            return 0;
        if (b == 14)
            return 1;
    }
}

int c2(int A[])
{
    int c = 0;
    while (c < 13)
    {
        if (A[c] == A[c + 1] == A[c + 2])
        {
            c = c + 3;
        }
        else if (A[c] == A[c + 1])
        {
            c = c + 2;
        }
        else
            return 0;
        if (c == 14)
            return 1;
    }
    c = 0;
    while (c < 13)
    {
        if (A[c + 2] - A[c + 1] == A[c + 1] - A[c] == 1)
        {
            c = c + 3;
        }
        else if (A[c] == A[c + 1])
        {
            c = c + 2;
        }
        else
            return 0;
        if (c == 14)
            return 1;
    }
}
