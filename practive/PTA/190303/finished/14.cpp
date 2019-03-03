#include <bits/stdc++.h>
using namespace std;

int num = 0;
int a, b;

bool deal(int x)
{
    int sum = 1;

    int tmp = sqrt(x);
    for(int i = 2; i <= tmp; i++)
        if(x % i == 0)
            sum = i + x / i + sum;
    if(sum == x)
        return true;
    else
        return false;
}

int main()
{
    cin >> a >> b;
    if(a == 1)
        a++;

    for(int i = a; i <= b; i++)
    {
        if(deal(i))
        {
            num++;
            if(num == 1)
                cout << i;
            else
                cout << " " << i;
        }
    }
    if(num == 0)
        cout << "None";
    return 0;
}
