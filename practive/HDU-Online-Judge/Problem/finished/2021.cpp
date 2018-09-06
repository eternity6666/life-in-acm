#include <iostream>
using namespace std;
int ans, num, n, paper[] = {100, 50, 10, 5, 2, 1};
void got_ans(int a)
{
    ans = ans + num / a;
    num %= a;
}

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d", &n) && n)
    {
        ans = 0;
        while(n--)
        {
            cin >> num;
            for(int i = 0; i < 6; i++)
                got_ans(paper[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
