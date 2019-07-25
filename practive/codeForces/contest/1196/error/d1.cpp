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

string get_s(int n)
{
    string ans = "";
    fadd(i, 1, n / 3)
        ans += "RGB";
    if(n % 3 == 1)
        ans += "R";
    else if(n % 3 == 2)
        ans += "RG";
    return ans;
}

int maxlen(string s, string s2)
{
    int len = s.length();
    int len2 = s2.length();
    int lens[maxn][maxn];
	
	for(int i=0; i<=leng1; i++)
	{
		for(int j=0; j<=leng2; j++)
		{
			if(i==0 || j==0)
			{
				lens[i][j] = 0;
			}
			else if(str1.charAt(i-1) == str2.charAt(j-1))
			{
				lens[i][j] = lens[i-1][j-1] + 1;
			}
			else
			{
				lens[i][j] = Math.max(lens[i][j-1], lens[i-1][j]);
			}
		}
	}
	
	return lens;

}

int main()
{
    freopen("in.txt", "r", stdin);
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        string s;
        cin >> s;
        int len = s.length();
        string s2 = get_s(len + 3);
        int tmp = maxlen(s, s2);
        if(k < tmp)
            cout << 0 << endl;
        else
            cout << k - tmp << endl;
    }
    return 0;
}


