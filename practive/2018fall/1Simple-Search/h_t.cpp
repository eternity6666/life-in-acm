#include<iostream>
#include<cstring>
#include<cstdio>
char a[102][102];
int row,col;
int dir[8][2]=
{
    {1,0},
    {1,1},
    {1,-1},
    {0,-1},
    {0,1},
    {-1,0},
    {-1,1},
    {-1,-1}
};
using namespace std;
void dfs(int i,int j)
{
    a[i][j]='*';
    for (int k=0;k<8;k++)
    {
        int x=i+dir[k][0];
        int y=j+dir[k][1];
        if (x>=1&&x<=row&&y>=1&&y<=col&&a[x][y]=='@')
            dfs(x,y);
    }
    return ;
}
int main()
{
    freopen("in.txt", "r", stdin);
    while ((cin>>row>>col)&&(row!=0||col!=0))
    {
        int c=0;
        getchar();
        for (int i=1;i<=row;i++)
            for (int j=1;j<=col;j++)
            cin>>a[i][j];
        for (int i=1;i<=row;i++)
            for (int j=1;j<=col;j++)
            if (a[i][j]=='@')
            {
                dfs(i,j);
                c++;
            }
        cout << c << endl;
    }
    return 0;
}
