#include <bits/stdc++.h>
using namespace std;
int num[] = {
    1, 2, 3, 5, 7,
    11, 13, 17, 23, 31,
    37, 53, 71, 73, 113,
    131, 137, 173, 311, 317
};
//int num[] = {1, 2, 3, 5, 7, 11, 13, 17, 23, 31, 37, 53, 71, 73, 113, 131, 137, 173, 311, 313, 317, 373, 1373, 3137};
int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        string N;
        cin >> N;
        int y = 0;
        if(N.size() >= 4)
        {
            y = 317;
        }
        else
        {
            int n;
            stringstream ss;
            ss << N;
            ss >> n;
//            cout << n << endl;
            for(int i = 19; i >= 0; i--)
            {
                if(n >= num[i])
                {
                    y = num[i];
                    break;
                }
            }
        }
        printf("Case #%d: %d\n", i ,y);
    }
    return 0;
}
