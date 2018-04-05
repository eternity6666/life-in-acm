#include <iostream>
using namespace std;

void PrintN( int N);
int main(){
    int n;
    cin >> n;
    PrintN(n);
    return 0;
}

void PrintN( int N){
    for(int i=1;i<=N;i++)
    {
        cout<<i<<endl;
    }
}