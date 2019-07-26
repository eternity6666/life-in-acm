#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

int nex[maxn];
string t, p;
int pLen, tLen;

void getNext()
{
    nex[0] = -1;
    int i = 0, j = -1;
    while(i < pLen)
    {
        if(j == -1 || p[i] == p[j])
            nex[++i] = ++j;
        else
            j = nex[j];
    }
}

void kmp()
{
    int i = 0, j = 0;
    while(i < tLen && j < pLen)
    {
        if(j == -1 || t[i] == p[j])
        {
            i++;
            j++;
            if(j == pLen)
            {
                cout << i - j + 1 << endl;
                j = nex[j];
            }
        }
        else
        {
            j = nex[j];
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> t >> p;
    tLen = t.length();
    pLen = p.length();
    getNext();
    kmp();
    fadd(i, 1, pLen)
        cout << nex[i] << (i == pLen ? "\n" : " ");
    return 0;
}


