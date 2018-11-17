#include <iostream>
#include <map>
using namespace std;

int main()
{
    /*
    int a = 'a' - 'a';
    int e = 'e' - 'a';
    int i = 'i' - 'a';
    int o = 'o' - 'a';
    int u = 'u' - 'a';
    */
    int n;
    cin >> n;
    getchar();
    for(int k = 1; k <= n; k++)
    {
        int ai, ei, ii, oi, ui;
        ai = ei = ii = oi = ui = 0;
        string s;
        getline(cin, s);
        for(int j = 0; j <= s.size(); j++)
        {
            int num = s[j] - 'a';
            switch(num)
            {
                case 'a' - 'a':
                    ai++;
                    break;
                case 'i' - 'a':
                    ii++;
                    break;
                case 'o' - 'a':
                    oi++;
                    break;
                case 'e' - 'a':
                    ei++;
                    break;
                case 'u' - 'a':
                    ui++;
                    break;
                default:
                    break;
            }
        }
        printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", ai, ei, ii, oi, ui);
        if(k < n)
            cout << endl;
    }
    return 0;
}
