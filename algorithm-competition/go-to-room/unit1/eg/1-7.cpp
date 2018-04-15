#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    m = (n%10)*100+(n/10%10)*10+(n/100);
    cout<<m<<endl;
    cout<<100;
    return 0;
}

