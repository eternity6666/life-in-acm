#include <iostream>
#include <map>
using namespace std;

int n;
map<string, int> ma;

int main()
{
    cin >> n;
    for(int i = 1; i <=n; i++)
    {
        string s;
        cin >> s;
        if(ma[s]==0)
        {
            cout << "OK" << endl;
            ma[s] = 1;
        }
        else
        {
            cout << s << ma[s] << endl;
            ma[s] = ma[s]+1;
        }
    }
    return 0;
}
