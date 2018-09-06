#include <iostream>
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int num = 0;
        for(int i = 0; i < s.size(); i++)
            if(s[i] < '0' || s[i] > '9')
                continue;
            else
                num ++;
        cout << num << endl;
    }
    return 0;
}
