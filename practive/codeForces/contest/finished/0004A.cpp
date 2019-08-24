#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    if(x<=3||x%2)
        cout << "NO" << endl;
    else
        cout << ((x-2)%2==0?"YES":"NO") << endl;
    return 0;
}
