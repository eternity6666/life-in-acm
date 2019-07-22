#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <string>
#define usefre
using namespace std;

set<string> dict;

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    string s, buf;
    while( cin >> s)
    {
        for(int i = 0; i < s.length(); i++)
            if(isalpha(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = ' ';
        stringstream ss(s);
        while(ss >> buf)
            dict.insert(buf);
    }
    for(set<string>::iterator it = dict.begin(); it != dict.end(); ++it)
        cout << *it << endl;
    return 0;
}

