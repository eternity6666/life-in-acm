#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>
using namespace std;

const int maxn = 200 + 5;
    
int n;
int s[maxn][maxn];

int got_ans();

int main()
{
    map<char, int> a;
    for(int i = 0; i <= 9; i++)
        a['0' + i] = i;

    int T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        memset(s, 0, sizeof(s));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n ; j++)
            {
                char c;
                scanf("%c", &c);
                s[i][j] = a[c];
            }
        }

        int ans = got_ans();
        printf("%d", ans);
    }
}

int got_ans()
{
    int ans = 0;
    for(int a = 0; a < n; ++a){
        for(int b = 0; b < n; ++b){
            if(b == a) continue;
            for(int c = 0; c < n; ++c){
                if(c == a || c == b) continue;
                for(int d = 0; d < n; ++d){
                    if(d == a || d == b || d == c) continue;
                    if(s[a][b] == s[b][c] && s[b][c] == s[c][d] && s[c][d] == s[d][a]){
                        ans++;
                    }
                    if(s[a][b] != s[b][c] && s[b][c] != s[c][d] && s[c][d] != s[d][a]){
                        ans--;
                    }
                }
            }
        }
    }
    return ans;
}
