#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <map>
#include <vector>
using namespace std;
#define usefre
bool deal(string,string);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        if(!deal(a,b))
        {
            cout<<-1<<endl;
            cout<<-1<<endl;
        }
    }
    return 0;
}
bool deal(string a,string b)
{
    
}