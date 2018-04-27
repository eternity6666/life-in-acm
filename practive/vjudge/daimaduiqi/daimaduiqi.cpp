#include <bits/stdc++.h>
using namespace std;

#define frein freopen("in.txt", "r", stdin)
#define freout freopen("out.txt", "w", stdout)

#define shiyongfre

const char space = '\32';

void deal(string s, int max[], int a);

int main()
{
#ifdef shiyongfre
    frein;
    cout<<13;
    freout;
#endif

    int max[180] = {0};
    string str;
    vector<string> s;
    while (getline(cin, str))
    {
        s.push_back(str);
        deal(str, max, 180);
    }
    vector<string>::iterator it;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            if (s[i][j] == space)
            {
                continue;
            }
            cout << s[i][j];
        }
        cout << endl;
    }
}

void deal(string s, int max[], int a)
{
    int max_value = 0;
    int max_id = 0;
    int first_space = 0;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == space)
        {
            if (!first_space)
            {
                continue;
            }
            else
            {
                max_id++;
                continue;
            }
        }
        else
        {
            first_space = 0;
            max_value++;
        }
        if (max_value > max[max_id])
        {
            max[max_id] = max_value;
        }
        max_value = 0;
        i++;
    }
}
