#include <iostream>
#include <vector>
using namespace std;

vector<int> ve;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int tmp;
        cin >> tmp;
        ve.push_back(tmp);
    }
    int count = 0;
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (ve[i] > ve[j])
                count++;
    cout << count << endl;
    return 0;
}