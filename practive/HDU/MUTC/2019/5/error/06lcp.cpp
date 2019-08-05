#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 1e6 + 10;

int a[maxn];
string s;
int len;
int k;
int saa[maxn];
int ra[maxn];
int height[maxn];
int tmp[maxn];

bool cmpsa(int i, int j){
    if(ra[i] != ra[j])
        return ra[i] < ra[j];
    else
    {
        int ri = i + k <= len ? ra[i+k]:-1;
        int rj = j + k <= len ? ra[j+k]:-1;
        return ri < rj;
    }
}

void sa()
{
    memset(saa, 0, sizeof(saa));
    memset(ra, 0, sizeof(ra));
    memset(tmp, 0, sizeof(tmp));
    for(int i = 0; i <= len; i++)
    {
        saa[i] = i;
        ra[i] = i < len ? s[i]: -1;
    }
    for(k = 1; k <= len; k *= 2)
    {
        sort(saa, saa + len + 1, cmpsa);
        tmp[saa[0]] = 0;
        for(int i = 1; i <= len; i++)
            tmp[saa[i]]=tmp[saa[i-1]]+(cmpsa(saa[i-1], saa[i])?1:0);
        for(int i =0; i <= len; i++)
            ra[i] = tmp[i];
    }
}

void lcp()
{
    memset(height, 0, sizeof(height));
    for(int i = 0; i <= len; i++) ra[saa[i]] = i;
    int h = 0;
    height[0] = 0;
    for(int i = 0; i < len; i++)
    {
        int j = saa[ra[i] - 1];
        if(h > 0)
            h--;
        for(;j+h<len&&i+h<len;h++)
            if(s[j+h] != s[i+h])
                break;
        height[ra[i] -1]=h;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
       // cout << s << endl;
        len = s.length();
        sa();
        lcp();
        int sum = 0;
        for(int i = 1; i < len; i++)
        {
            cout << height[i] << (i==len-1?"\n":" ");
            sum += height[i] == len - i ? 0:1;
        }
        cout << sum <<endl;
    }
    return 0;
}

// sum += a[i] + (a[i] == len -i?0:1);