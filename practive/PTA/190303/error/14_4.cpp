#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    vector<long long> v;
    if(a <= 6 && 6 <= b)
        v.push_back(6);

    if(a <= 28 && 28 <= b)
        v.push_back(28);

    if(a <= 496 && 496 <= b)
        v.push_back(496);

    if(a <= 8128 && 8128 <= b)
        v.push_back(8128);

    if(v.empty())
        cout << "None";
    else
    {
        vector<long long>::iterator it;
        for(it = v.begin(); it != v.end(); it++)
        {
            if(it == v.begin())
                cout << *it;
            else
                cout << " " << *it;
        }
        // cout << endl;
    }
    return 0;
}
