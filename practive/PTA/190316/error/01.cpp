#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n;
int arr[maxn];
vector<int> 
vector<int>::iteartor it;

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    fei(1, n)
        cin >> arr[i];

    fei(1, n)
    {
        cout << "#" << i << endl;
        fej(1, arr[j])
        {
            fek(1, 10)
            {
                if(k == 1)
                    cout << 1;
                else
                    cout << " " << 1;
            }
            cout << endl;
        }
    }
    return 0;
}


