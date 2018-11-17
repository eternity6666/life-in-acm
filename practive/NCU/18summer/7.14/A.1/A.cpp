#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
#define usefre
int style(vector<int> num);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    while (n--)
    {
        //input
        vector<int> num;
        int tmp;
        int i = 14;
        while (i-- && cin >> tmp)
        {
            num.push_back(tmp);
        }
        sort(num.begin(), num.end());
        int ans;
        if (style(num) == 1)
        {
            ans = 1;
        }
        else if (style(num) == 2)
        {
        }
        else
        {
            ans = 0;
        }
        //deal
        //output
        cout << ans << endl;
    }
    return 0;
}
int style(vector<int> num)
{
    
}