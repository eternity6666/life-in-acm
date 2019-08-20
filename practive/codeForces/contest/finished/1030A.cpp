#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    bool flag = true;
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        if(tmp) flag = 0;
    }
    cout << (flag?"EASY":"HARD") << endl;
    return 0;
}