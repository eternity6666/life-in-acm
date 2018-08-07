#include <iostream>
using namespace std;

vector<int> a;
int main()
{
    int n, m;
    int num = 0;
    while(cin >> n >> m)
    {
        num ++;
        a.clear();
        for(int i = 1; i <= n; i++)
            a.push_back(i);
        while(m--)
        {
            int method, x, y;
            cin >> method
            switch(method)
            {
                case 1;
                    cin >> x >> y;
                    movel(x, y);
                    break;
                case 2:
                    cin >> x >> y;
                    mover(x, y);
                    break;
                case 3:
                    cin >> x >> y;
                    change(x, y);
                    break;
                case 4:
                    reverser();
                    break;
            }
        }
        cout << "Case " << num << ": ";
    }
}
