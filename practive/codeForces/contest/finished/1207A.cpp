#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int b, p, f, h, c; cin >> b >> p >> f >> h >> c;
        int ans = 0;
        for(int i = 0; i <= p; i++)
            for(int j = 0; j <= f; j++)
                if(2*i+2*j<=b&&i*h+j*c>ans)
                    ans = i*h+j*c;
        cout << ans << endl;
    }
    return 0;
}