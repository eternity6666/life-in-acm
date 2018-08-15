#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define usefre
struct substring
{
    string s;
    int i;
};
bool Comp(const substring &a, const substring &b);
substring gotSubstring(int i, string s);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w",stdout);
#endif
    string s;
    cin >> s;
    vector<substring> sArray;
    for (int i = 0; i < s.length(); i++)
    {
        sArray.push_back(gotSubstring(i, s));
    }
    sort(sArray.begin(), sArray.end());
    return 0;
}

bool Comp(const substring &a, const substring &b)
{
    if (a.s > b.s)
        return a > b;
    else
        return a > b;
}
substring gotSubstring(int i, string s)
{
    substring ans;
    ans.s = "";
    ans.i = i;
    while (i < s.length())
    {
        ans.s += s[i];
    }
    return ans;
}