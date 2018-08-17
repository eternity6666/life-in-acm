#include <iostream>
using namespace std;
int main()
{
    freopen("in.txt", "r", stdin);
    char a[10];
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if(a[i] == '?')
            continue;
        else
            sum = sum + (a[i] - '0') * (10 - i);
    }
    cout << sum << endl;
    return 0;
}
