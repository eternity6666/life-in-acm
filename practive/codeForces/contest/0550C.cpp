#include <iostream>
using namespace std;

string s;
bool is()
{
    int len = s.length();

}

int main()
{
    // cin >> s;
    // cout << (is()?"YES":"NO") << endl;
    for(int i = 1; i <= 100; i++) cout << 8*i << (i%5==0?"\n":" ");
    return 0;
}
