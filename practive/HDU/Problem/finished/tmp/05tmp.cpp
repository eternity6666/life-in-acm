#include <iostream>
using namespace std;
const int maxn = 1e6;

int a[maxn];
int sum[maxn];
int main()
{
    a[1] = 1;
    sum[1] = 1;
    int tmp = 2;
    printf(" 0 %2d ", a[1]);
    for(int i = 2; i <= 104; i++)
    {
        a[i] = sum[i-1] % i;
        sum[i] = sum[i-1] + a[i] * i;
        printf("%2d ", a[i]);
        tmp++;
        if(tmp % 6 == 0)
            cout << endl;
    }
    cout << endl;
    
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //     long long n;
    //     cin >> n;

    // }
    return 0;
}

/*
 0  1  1  0  3  0
 3  5  4  1  9  1
 6  9  7  2 15  2
 9 13 10  3 21  3
12 17 13  4 27  4
15 21 16  5 33  5
18 25 19  6 39  6
21 29 22  7 45  7
24 33 25  8 51  8
27 37 28  9 57  9
30 41 31 10 63 10
33 45 34 11 69 11
36 49 37 12 75 12
39 53 40 13 81 13
42 57 43 14 87 14
45 61 46 15 93 15
48 65 49 16 99 16
51 69 52
*/