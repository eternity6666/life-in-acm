#include <bits/stdc++.h>
using namespace std;

const int maxn = 100000 + 5;

string ans[] = {"No", "Yes"};
bool flag;
int room[maxn], a, b, height[maxn];

int findX(int x);
void merge(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    while(1)
    {
        memset(room, 0, sizeof(room));
        flag = 1;
        while(scanf("%d %d", &a, &b) && a && b)
        {
            if(a == -1 && b == -1)
                return 0;
            if(room[a] == 0)
                room[a] = a;
            if(room[b] == 0)
                room[b] = b;
            merge(a, b);
        }
        int root_num = 0;
        for(int i = 1; i < maxn; i++)
        {
            if(room[i] == i)
            {
                root_num++;
                if(root_num > 1)
                {
                    flag = 0;
                    break;
                }
            }
        }
        //cout << flag << endl;
        cout << ans[flag] << endl;
    }
    return 0;
}

int findX(int x)
{
    return room[x] == x ? x : room[x] = findX(room[x]);
}

void merge(int a, int b)
{
    a = findX(a);
    b = findX(b);
    if(a == b)
    {
        flag = 0;
        return;
    }
    room[a] = b;
    /*
    if(height[a] < height[b])
    {
        height[a] = b;
    }
    else
    {
        height[b] = a;
        if(height[a] == height[b])
        {
            height[a]++;
        }
    }
    */
}

