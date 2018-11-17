// #include <iostream>
#include <bits/stdc++.h>
// #include <set>
using namespace std;

// void deal(string a);

int main()
{
    string a;
    while (getline(cin, a))
    {
        if (a == "#")
            break;
        set<string> ss;
        int m = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == ' ')
            {
                string stmp;
                for (int j = m; j <= i; j++)
                {
                    stmp += a[j];
                }
                ss.insert(stmp);
                m = i+1;
            }
        }
        cout << ss.size() << endl;
        // getchar();
    }
}