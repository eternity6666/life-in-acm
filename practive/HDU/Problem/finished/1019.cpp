#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    long long n;
    cin >> n;
    while (n--)
    {
        long long m;
        cin >> m;
        long long tmp;
        vector<long long> a;
        while (m--)
        {
            cin >> tmp;
            a.push_back(tmp);
        }
        while (a.size() != 1)
        {
            long long aa = *(a.begin());
            long long bb = *(a.begin() + 1);
            while (aa % bb != 0)
            {
                aa = aa % bb;
                if (aa < bb)
                {
                    tmp = bb;
                    bb = aa;
                    aa = tmp;
                }
            }
            *(a.begin())=*(a.begin())**(a.begin()+1)/bb;
            a.erase(a.begin()+1);
        }
        cout << *a.begin() << endl;
    }

    return 0;
}