#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<map>
#include<set>
#include<ctime>
#define eps 1e-6
#define MAX 10005
#define INF 0x3f3f3f3f
#define LL long long
#define pii pair<int,int>
#define rd(x) scanf("%d",&x)
#define rd2(x,y) scanf("%d%d",&x,&y)
#define rd3(x,y,z) scanf("%d%d%d",&x,&y,&z)
///map<int,int>mmap;
///map<int,int >::iterator it;
using namespace std;
int vist[105][105],a,b,c;//a b c->S 可乐的体积 , N 和 M是两个杯子的容量
char opr[][10]={"","POUR(1,2)","POUR(2,1)","DROP(1)","DROP(2)","FILL(1)","FILL(2)"};
int lastOpr[105][105];
int lasta[105][105];
int lastb[105][105];

struct node
{
    int a,b;
    int step;//步数
};
int sum=0;

void myPrint(int a,int b){
  if(lastOpr[a][b]!=0){
    myPrint(lasta[a][b],lastb[a][b]);
    printf("%s\n",opr[ lastOpr[a][b] ]);
  }
}

void bfs()
{
    queue<node>que;
    memset(vist,0,sizeof(vist));
    node p1;
    p1.a=0 , p1.b=0 ,p1.step=0,lastOpr[0][0]=0;
    que.push(p1);
    vist[0][0]=1;

    while(!que.empty())
    {
        p1=que.front();
        que.pop();
       // printf("%d%d  ",p1.a,p1.b);
        if(p1.a==c||p1.b==c)
        {
            printf("%d\n",p1.step);
            myPrint(p1.a,p1.b);
            return;
        }
        //
        node p2;
        if(p1.a!=0)
        {//a倒入b
            if(p1.a>b-p1.b)
            {
                p2.a=p1.a-(b-p1.b);
                p2.b=b;
                p2.step=p1.step+1;
            }
            else
            {
                p2.a=0;
                p2.b=p1.b+p1.a;
                p2.step=p1.step+1;
            }
            if(!vist[p2.a][p2.b])
            {
                vist[p2.a][p2.b]=1;
                lastOpr[p2.a][p2.b]=1,lasta[p2.a][p2.b]=p1.a,lastb[p2.a][p2.b]=p1.b;
                que.push(p2);
            }
        }

        if(p1.b!=0)
        {//b倒入a
            if(p1.b>a-p1.a)
            {
                p2.b=p1.b-(a-p1.a);
                p2.a=a;
                p2.step=p1.step+1;
            }
            else
            {
                p2.b=0;
                p2.a=p1.a+p1.b;
                p2.step=p1.step+1;
            }
            if(!vist[p2.a][p2.b])
            {
                vist[p2.a][p2.b]=1;
                que.push(p2);
                lastOpr[p2.a][p2.b]=2,lasta[p2.a][p2.b]=p1.a,lastb[p2.a][p2.b]=p1.b;
            }
        }
        if(p1.a!=0){ ///a清空
          p2.a=0,p2.b=p1.b,p2.step=p1.step+1;
          if(!vist[p2.a][p2.b]){
              vist[p2.a][p2.b]=1;
              que.push(p2);
              lastOpr[p2.a][p2.b]=3,lasta[p2.a][p2.b]=p1.a,lastb[p2.a][p2.b]=p1.b;
          }
        }
        if(p1.b!=0){ ///b清空
          p2.a=p1.a,p2.b=0,p2.step=p1.step+1;
          if(!vist[p2.a][p2.b]){
              vist[p2.a][p2.b]=1;
              que.push(p2);
              lastOpr[p2.a][p2.b]=4,lasta[p2.a][p2.b]=p1.a,lastb[p2.a][p2.b]=p1.b;
          }
        }
        if(p1.a!=a){///a装满
          p2.a=a,p2.b=p1.b,p2.step=p1.step+1;
          if(!vist[p2.a][p2.b]){
              vist[p2.a][p2.b]=1;
              que.push(p2);
              lastOpr[p2.a][p2.b]=5,lasta[p2.a][p2.b]=p1.a,lastb[p2.a][p2.b]=p1.b;
          }
        }
        if(p1.b!=b){///b装满
          p2.a=p1.a,p2.b=b,p2.step=p1.step+1;
          if(!vist[p2.a][p2.b]){
              vist[p2.a][p2.b]=1;
              que.push(p2);
              lastOpr[p2.a][p2.b]=6,lasta[p2.a][p2.b]=p1.a,lastb[p2.a][p2.b]=p1.b;
          }
        }
    }
    printf("impossible\n");
}

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d%d%d",&a,&b,&c))
    {

        if(a==0&&b==0&&c==0)
            break;
        bfs();
    }
    return 0;
}

