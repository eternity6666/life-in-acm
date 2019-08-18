#include <iostream>
using namespace std;

int n;
int arr[15];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    cin >> n;
    char c;
    for(int i = 1; i <= n; i++)
    {
        cin >> c;
        if(c == 'L')
        {
            int x = 0;
            for(x = 0; x < 10; ++x)
                if(arr[x] == 0)
                    break;
            arr[x] = 1;
        }
        else if(c == 'R')
        {
            int x = 9;
            for(x = 9; x >= 0; --x)
                if(arr[x] == 0)
                    break;
            arr[x] = 1;
        }
        else
        {
            int x = c - '0';
            arr[x] = 0;
        }
    }
    for(int i = 0; i <= 9; i++)
        cout << arr[i] << (i==9?"\n":"");
    return 0;
}