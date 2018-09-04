#include <iostream>
using namespace std;
int array[40 + 5];
int main()
{
    freopen("in.txt", "r", stdin);
    array[1] = array[2] = 1;
    for(int i = 2; i <= 40; i++)
        array[i] = array[i - 1] + array[i - 2];
    int N;
    cin >> N;
    while(N--)
    {
        int M;
        cin >> M;
        cout << array[M] << endl;
    }
    return 0;
}
/*
#include <iostream>
#include <cstdio>
using namespace std;

int M, ans = 0;

void bfs(int now);

int array[40 + 5];
bool array_bool[40 + 5] = {0};

int main()
{
    int N;
    scanf("%d", &N);
    while(N--)
    {
        scanf("%d", &M);
        if(array_bool[M] == false)
        {
            ans = 0;
            bfs(1);
            array_bool[M] = true;
            array[M] = ans;
        }
        printf("%d\n", array[M]);
    }
    return 0;
}

void bfs(int now)
{
    if(now == M)
    {
        ans++;
        return;
    }
    else if(now > M)
        return;
    else
    {
        bfs(now + 1);
        bfs(now + 2);
    }
}
*/
