#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 100 + 5;

struct code{
    int i, j, s;
}c[maxn][maxn];

struct node{
    int x, y, step;
};

string str[] = {"1111111", 
    "FILL(1)",   "FILL(2)", 
    "POUR(1,2)", "POUR(2,1)", 
    "DROP(1)",   "DROP(2)",
};
bool v[maxn][maxn];

int A, B, C, step = 0, ansi, ansj, anss;

/*void drop(int i);
void fill(int i);
void pour(int i, int j);*/

bool input();
void bfs();
void output(code x);

int main()
{
    freopen("in.txt", "r", stdin);

    while(input())
    {
        bfs();

        if(step != 0)
        {
            cout << step << endl;
            stack<code> s;
            code tmp;
            tmp.i = c[ansi][ansj].i;
            tmp.j = c[ansi][ansj].j;
            tmp.s = c[ansi][ansj].s;
            /*
            fei(0, A)
            {
                fej(0, B)
                {
                    output(c[i][j]);
                }
                cout << endl;
            }
            */
            s.push(tmp);
            while(1)
            {
                tmp = s.top();
              //  cout << tmp.i << tmp.j << str[tmp.s] << endl;
                if(tmp.i == 0 && tmp.j == 0)
                    break;
                s.push(c[tmp.i][tmp.j]);
            }
            // cout << 1 << endl;
            while(!s.empty())
            {
                tmp = s.top();
                s.pop();
                /*
                if(s.empty())
                    break;
                */
                output(tmp);
            }
        }
        else
            cout << "impossible\n";
    }

    return 0;
}

void bfs()
{
    queue<node> q;
    node f;
    f.x = f.y = f.step = 0;
    v[f.x][f.y] = 1;
    q.push(f);

    while(!q.empty())
    {
        f = q.front();
        q.pop();

        if(f.x == C || f.y == C)
        {
            ansi = f.x;
            ansj = f.y;
            anss = c[f.x][f.y].s;
            step = f.step;
            return ;
        }
        node tmp;
        // fill(1)1
        if(f.x != A && !v[A][f.y])
        {
            v[A][f.y] = 1;
            tmp.x = A;
            tmp.y = f.y;
            tmp.step = f.step + 1;
            q.push(tmp);
            c[tmp.x][tmp.y].i = f.x;
            c[tmp.x][tmp.y].j = f.y;
            c[tmp.x][tmp.y].s = 1;
        }

        // fill(2)2
        if(f.y != B && !v[f.x][B])
        {
            v[f.x][B] = 1;
            tmp.x = f.x;
            tmp.y = B;
            tmp.step = f.step + 1;
            q.push(tmp);
            c[tmp.x][tmp.y].i = f.x;
            c[tmp.x][tmp.y].j = f.y;
            c[tmp.x][tmp.y].s = 2;
        }

        // pour(1,2)3
        if(f.x > 0 && f.y < B)
        {
            if(f.x < B - f.y && !v[0][f.x + f.y])
            {
                v[0][f.x + f.y] = 1;
                tmp.x = 0;
                tmp.y = f.x + f.y;
                tmp.step = f.step + 1;
                q.push(tmp);
                c[tmp.x][tmp.y].i = f.x;
                c[tmp.x][tmp.y].j = f.y;
                c[tmp.x][tmp.y].s = 3;
            }
            if(f.x >= B - f.y && !v[f.x - (B - f.y)][B])
            {
                v[f.x - (B - f.y)][B] = 1;
                tmp.x = f.x - (B - f.y);
                tmp.y = B;
                tmp.step = f.step + 1;
                q.push(tmp);
                c[tmp.x][tmp.y].i = f.x;
                c[tmp.x][tmp.y].j = f.y;
                c[tmp.x][tmp.y].s = 3;
            }
        }

        // pour(2,1)4
        if(f.y > 0 && f.x < A)
        {
            if(f.y < A - f.x && !v[f.x + f.y][0])
            {
                v[f.x + f.y][0] = 1;
                tmp.x = f.x + f.y;
                tmp.y = 0;
                tmp.step = f.step + 1;
                q.push(tmp);
                c[tmp.x][tmp.y].i = f.x;
                c[tmp.x][tmp.y].j = f.y;
                c[tmp.x][tmp.y].s = 4;

            }
            if(f.y >= A - f.x && !v[A][f.y - (A - f.x)])
            {
                v[A][f.y - (A - f.x)] = 1;
                tmp.x = A;
                tmp.y = f.y - (A - f.x);
                tmp.step = f.step + 1;
                q.push(tmp);
                c[tmp.x][tmp.y].i = f.x;
                c[tmp.x][tmp.y].j = f.y;
                c[tmp.x][tmp.y].s = 4;

            }
        }

        // drop(1)5
        if(f.x > 0 && !v[0][f.y])
        {
            v[0][f.y] = 1;
            tmp.x = 0;
            tmp.y = f.y;
            tmp.step = f.step + 1;
            q.push(tmp);
            c[tmp.x][tmp.y].i = f.x;
            c[tmp.x][tmp.y].j = f.y;
            c[tmp.x][tmp.y].s = 5;
        }

        // drop(2)6
        if(f.y > 0 && !v[f.x][0])
        {
            v[f.x][0] = 1;
            tmp.x = f.y;
            tmp.y = 0;
            tmp.step = f.step + 1;
            q.push(tmp);
            c[tmp.x][tmp.y].i = f.x;
            c[tmp.x][tmp.y].j = f.y;
            c[tmp.x][tmp.y].s = 6;
        }
    }
}

void output(code x)
{
    cout << str[x.s] << endl;
    // cout << x.i << " " << x.j << " " << str[x.s] << " ";
}

bool input()
{
    if(~scanf("%d %d %d", &A, &B, &C))
    {   
        step = 0;
        fei(0,A)
            fej(0,B)
            {
                c[i][j].i = c[i][j].j = -1;
                c[i][j].s = 0;
                v[i][j] = 0;
            }
        return true;
    }
    return false;
}

/*
void pour(int i, int j)
{
    if(i == 1 && j == 2)
    {
        if(a < B - b)
        {
            b = b + a;
            a = 0;
        }
        else
        {
            a = a + B - b;
            b = B;
        }
    }
    if(i == 2 && j == 1)
    {
        if(b < A - a)
        {
            a = a + b;
            b = 0;
        }
        else
        {
            b = b + A - a;
            a = A;
        }
    }
}

void fill(int i)
{
    if(i == 1)
        a = A;
    else
        b = B;
}

void drop(int i)
{
    if(i == 1)
        a = 0;
    if(i == 2)
        b = 0;
}
*/

