// author:阳作华;
// time:2018-04-06 09:37
// address:JiangXi China;

#include <iostream>
using namespace std;
    
int main(){
    int first,past;
    cin >>first >>past;
    int tmp;
    tmp=first/100*60+first%100+past;
    first=tmp/60*100+tmp%60;
    cout<<first;
    return 0;
}