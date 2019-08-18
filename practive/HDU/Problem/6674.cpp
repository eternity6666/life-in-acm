#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    int t; cin >> t;
    while(t--)
    {
        int v; cin >> v;
        int tmpv = v;
        int v2 = 0;
        while(tmpv)
        {
            v2 += tmpv % 10;
            tmpv/=10;
        }
        set<int> se;
        for(int i = 1; i <= v2; i++)
            if(v2 % i == 0 && v % i == 0)
                se.insert(i);
        cout << se.size() << endl;
        set<int>::iterator it;
        for(it = se.begin(); it != se.end(); it++)
            cout << (it == se.begin()?"": " ") << *it;
        cout << endl;
    }
    return 0;
}