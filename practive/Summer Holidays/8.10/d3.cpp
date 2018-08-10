#include <iostream>
#include <set>
#include <fstream>
#define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt", "in.txt", stdin);
    freopen("out.txt", "out.txt", stdout);
#endif

    int n, m;
    while(scanf("%d %d", &n, &m) == 2)
    {
        set<int> b;
        b.clear();
        for(int i = 1; i <= m; i++)
        {
            int tmp;
            cin >> tmp;
            b.insert(tmp);
        }
        int num = 1;
        set<int>::iterator it;
        it = b.begin();
        for(int i = 1; i <= n;)
        {
            if(it == b.end())
            {
                cout << num << endl;
                num ++;
                i++;
            }
            else if(num > n)
            {
                cout << *it << endl;
                it++;
                i++;
            }
            else if(num < *it && it != b.end())
            {
                if(b.find(num) == b.end())
                {
                    cout << num << endl;
                    num++;
                    i++;
                }
                else
                {
                    num++;
                }
            }
            else
            {
                i++;
                cout << *(it) << endl;
                it++;
            }
        }
    }
    return 0;
}
