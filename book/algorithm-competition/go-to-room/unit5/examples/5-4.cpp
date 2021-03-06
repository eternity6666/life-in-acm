#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <map>
#include <algorithm>
#define usefre
using namespace std;

map<stirng, int> cnt;
vector<string> words;

string repr(const string &s)
{
    string ans = s;
    for(int i = 0; i < ans.length(); i++)
        ans[i] = tolower(ans[i]);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n = 0;
    string s;
    while (cin >> s)
    {
        if(s[0] == '#') break;
        words.push_back(s);
        string r = repr(s);
        if(!cnt.count(r)) cnt[r] = 0;
        cnt[r]++;
    }
    vector<string> ans;
    for(int i = 0; i < words.size(); i++)
        if(cnt[repr(words[i])] == 1) ans.push_back(words[i]);
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}
