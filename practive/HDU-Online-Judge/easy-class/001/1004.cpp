#include <iostream>
#include <fstream>
#define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    int caseNum = 1;
    while (cin >> n)
    {
        cout << "Case " << caseNum << ":\n";
        
    }
    return 0;
}