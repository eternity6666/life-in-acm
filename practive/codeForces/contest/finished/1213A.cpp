#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, a, b, tmp;
    a = b = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        if(tmp % 2 == 1) a++;
        else b++;
    }
    cout << (a<b?a:b) << endl;
    return 0;
}
