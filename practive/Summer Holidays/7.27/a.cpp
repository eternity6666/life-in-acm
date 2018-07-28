#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#define usefre
using namespace std;

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif

    int T;
    cin>>T;
    while(T--)
    {
        int array[13] = {0};
        long a;
        int b;
        cin >> a >> b;
        array[0] = a / 100;
        a = a % 100;
        array[1] = a / 50;
        a = a % 50;
        array[2] = a / 20;
        a = a % 20;
        array[3] = a / 10;
        a = a % 10;
        array[4] = a / 5;
        a = a % 5;
        array[5] = a / 2;
        a = a % 2;
        array[6] = a / 1;
        array[7] = b / 50;
        b = b % 50;
        array[8] = b / 20;
        b = b % 20;
        array[9] = b / 10;
        b = b % 10;
        array[10] = b / 5;
        b = b % 5;
        array[11] = b / 2;
        b = b % 2;
        array[12] = b / 1;
        for(int i = 0; i < 13; i++)
        {
            if(i != 0)
            {
                cout << " ";
            }
            cout << array[i];
        }
        cout << endl;
    }
    return 0;
}
