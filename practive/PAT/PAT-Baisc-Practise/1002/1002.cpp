#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>

using namespace std;
// #define fre freopen("./num.txt","r",stdin)

int main(){
    // fre;
    string n;
    cin>>n;
    string pingyin[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum=0;
    for(int i=0;i<n.size();i++)
    {
        sum+=(n[i]-'0');
    }
    // cout<<sum;
    int j;
    string tmp;
    stringstream ss;
    ss<<sum;
    ss>>tmp;
    for(j=0;j<tmp.size()-1;j++)
    {
        cout<<pingyin[tmp[j]-'0']<<" ";
    }
    cout<<pingyin[tmp[j]-'0'];
    return 0;
}