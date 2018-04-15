#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // cout<<n<<endl;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}