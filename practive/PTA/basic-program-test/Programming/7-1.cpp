#include <iostream>
using namespace std;

int main(){
    int cm,foot,inch;
    cin >> cm;
    int tmp;
    foot = cm/30.48;
    inch = (cm/30.48-foot)*12;
    cout <<foot<<" "<<inch;
}