#include <iostream>
using namespace std;
int main()
{
    int i=2;
    for(int j=0;j<100;j++)
    {
        cout<<((i*=2)-1)<<endl;
    }
    return 0;
}