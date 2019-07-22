#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    freopen("2-6-out.txt", "w", stdout);
    // cout << true << endl;
    // cout << false << endl;
    for (int a = 123; a < 330; a++)
    {
        bool visit[10];
        for (int j = 1; j < 10; j++)
            visit[j] = true;
        visit[a / 100] = false;
        visit[a / 10 % 10] = false;
        visit[a % 10] = false;
        visit[2 * a / 100] = false;
        visit[2 * a / 10 % 10] = false;
        visit[2 * a % 10] = false;
        visit[3 * a / 100] = false;
        visit[3 * a / 10 % 10] = false;
        visit[3 * a % 10] = false;
        int i = 1;
        for (; i < 10; i++)
        {
            if (visit[i] == false)
            {
                // cout << visit[i];
                continue;
            }
            else
                break;
        }
        // cout << endl;
        if (i == 10)
        {
            cout << a << " " << 2 * a << " " << 3 * a << endl;
        }
    }
}