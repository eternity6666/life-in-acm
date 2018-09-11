#include <iostream>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        getchar();
        while(n--)
        {
            string s;
            getline(cin, s);
            int ans = 0;
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] < 0)
                    ans++;
            }
            cout << ans / 3 << endl;
        }
    }
    return 0;
}
