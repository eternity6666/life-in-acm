#include <iostream>
using namespace std;

int x1, y1, x2, y2, x3, y3, x4, y4;

bool xj()
{
    if (!(min(x1, x2) <= max(x3, x4) && min(x3, x4) <= max(x1, x2) && min(y1, y2) <= max(y3, y4) && min(y3, y4) <= max(y1, y2)))
        return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;
    }
    return 0;
}
