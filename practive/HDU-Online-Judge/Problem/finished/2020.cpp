#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    while(~scanf("%d", &n) && n)
    {
        int num[100 + 5];
        for(int i = 0; i < n; i++)
            cin >> num[i];
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                if(abs(num[i]) < abs(num[j]))
                {
                    int tmp = num[i];
                    num[i] = num[j];
                    num[j] = tmp;
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(i)
                cout << " ";
            cout << num [i];
        }
        cout << endl;
    }
    return 0;
}
