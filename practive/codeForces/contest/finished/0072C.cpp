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

/* io
a := 0
b := 0
for(i, 1, x) if(x%i==0, if(i%2==0, a:=a+1, b:=b+1))
if(a==b, "yes" println, "no" println)
*/
