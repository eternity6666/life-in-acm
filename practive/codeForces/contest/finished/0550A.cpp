#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s; cin >> s;
    set<int> ab, ba;
    int len = s.length();
    for(int i = 1; i < len; i++)
        if(s[i]=='A'&&s[i-1]=='B')
            ab.insert(i);
        else if(s[i]=='B'&&s[i-1]=='A')
            ba.insert(i);
    if(ab.size()==0||ba.size()==0)
        cout << "NO" << endl;
    else
    {
        set<int>::iterator it1, it2;
        for(it1 = ab.begin(); it1 != ab.end(); it1++)
            for(it2 = ba.begin(); it2 != ba.end(); it2++)
                if(!(*it1-*it2 <= 1 && *it1-*it2 >= -1))
                {
                    cout << "YES" << endl;
                    return 0;
                }
        cout << "NO" << endl;
    }
    return 0;
}
