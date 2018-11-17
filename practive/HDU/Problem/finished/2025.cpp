#include <iostream>
using namespace std;
string s = "(max)";
int main()
{
    string mm;
    while(getline(cin, mm))
    {
        char m = 'a' - 1;
        for(int i = 0; i < mm.size(); i++)
        {
            if(mm[i] > m)
                m = mm[i];
        }
        for(int i = 0; i < mm.size(); i++)
        {
            cout << mm[i];
            if(mm[i] == m)
                cout << s;
        }
        cout << endl;
    }
    return 0;
}
