#include <iostream>
using namespace std;
const int maxn = 100000000 + 5;
bool visit[maxn];

void getPrime(int n);

int main()
{
    int n;
    cin >> n;
    getPrime(n);
    for(int i = 2; i < n; i++)
        if(!visit[i])
            cout << i << endl;
    return 0;
}

void getPrime(int n)
{
    visit[0] = 1;
    visit[1] = 1;
    for(long long i = 2; i < n; i++)
    {
        if(!visit[i])
            for(long long k = i; i * k < n; k++)
                visit[i * k] = 1;
    }
}
