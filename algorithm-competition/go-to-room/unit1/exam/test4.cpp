#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n;
    cin>>n;
    n=acos(-1)*n/180;
    cout<<sin(n)<<" "<<cos(n)<<endl;
    return 0;
}