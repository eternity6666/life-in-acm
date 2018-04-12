#include <iostream>
using namespace std;

int panduan(int n);

int main()
{
    int num;
    char s;
    cin >> num >> s;
    if (num <= 6)
    {
        cout << s << endl;
        cout << num - 1;
    }
    else
    {
        int max = panduan(num);

        int n = max;
        for (; n > 1; n -= 2)
        {
            for (int j = 0; j < (max - n) / 2; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < n; j++)
            {
                cout << s;
                num--;
            }
            cout << endl;
        }
        for (; n <= max; n += 2)
        {
            for (int j = 0; j < (max - n) / 2; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < n; j++)
            {
                cout << s;
                num--;
            }
            cout << endl;
        }
        cout << num;
    }
    return 0;
}

int panduan(int n)
{
    int max = 1, sum = 0;
    while (sum < n - max - 2)
    {
        if (max == 1)
        {
            sum += max;
        }
        else
        {
            sum += 2 * max;
        }
        max += 2;
    }
    max -= 2;
    return max;
}