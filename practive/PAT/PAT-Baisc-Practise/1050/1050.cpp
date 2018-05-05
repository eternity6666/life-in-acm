#define usefre

#include <bits/stdc++.h>
using namespace std;

const int maxn = 1005;

void showAnswer(multiset<int> nbs,int N);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    multiset<int> nbs;
    int N, tmp, i;
    cin >> N;
    while (cin >> tmp && i < N)
    {
        i++;
        nbs.insert(tmp);
    }
    showAnswer(nbs,N);
    return 0;
}

void showAnswer(multiset<int> nbs,int N)
{
    int m,n;
    
}