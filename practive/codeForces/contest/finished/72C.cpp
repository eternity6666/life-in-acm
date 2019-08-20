#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    int a, b; a = b = 0;
    for(int i = 1; i <= x; i++)
        if(x % i == 0)
            if(i%2==0) a++;
            else b++;
    cout << (a==b?"yes":"no");
    return 0;
}
