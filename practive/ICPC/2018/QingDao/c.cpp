#include <bits/stdc++.h>
using namespace std;
const int maxn = 10000 + 5;

bool flag = 0;
int reg = 0, ip = 1;

struct node{
    string c;
    int v, k;
    int ordreg, ordip;
}ins[maxn];

void add(int v);
void beq(int v, int k);
void bne(int v, int k);
void blt(int v, int k);
void bgt(int v, int k);

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        flag = reg = 0;
        ip = 1;
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            cin >> ins[i].c;
            if(ins[i].c == "add")
                cin >> ins[i].v;
            else
                cin >> ins[i].v >> ins[i].k;
            ins[i].ordreg = ins[i].ordip = -1;
        }
        int ca = 0;
        while(1)
        {
            // cout << "case " << ++ca << endl;
            if(ins[ip].c == "add")
                add(ins[ip].v);
            else if(ins[ip].c == "beq")
                beq(ins[ip].v, ins[ip].k);
            else if(ins[ip].c == "bne")
                bne(ins[ip].v, ins[ip].k);
            else if(ins[ip].c == "blt")
                blt(ins[ip].v, ins[ip].k);
            else if(ins[ip].c == "bgt")
                bgt(ins[ip].v, ins[ip].k);
            // cout << ip << " " << flag << " " << reg << endl;
            if(flag)
            {
                break;
            }
            if(ip == n + 1)
            {
                flag = 0;
                break;
            }
            //if(ca > 100)
            //    break;
            //cout << ip << endl;
        }
        if(flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}

void add(int v)
{
    if(reg == ins[ip].ordreg && ip == ins[ip].ordip)
        flag = 1;
    else
    {
        ins[ip].ordreg = reg;
        ins[ip].ordip = ip;
    }
    reg = (reg + v) % 256;
    ip++;
}

void beq(int v, int k)
{
    if(reg == ins[ip].ordreg && ip == ins[ip].ordip)
        flag = 1;
    else
    {
        ins[ip].ordreg = reg;
        ins[ip].ordip = ip;
    }
    if(reg == v)
        ip = k;
    else
        ip++;
}

void bne(int v, int k)
{
    if(reg == ins[ip].ordreg && ip == ins[ip].ordip)
        flag = 1;
    else
    {
        ins[ip].ordreg = reg;
        ins[ip].ordip = ip;
    }
    if(reg != v)
        ip = k;
    else
        ip++;
}

void blt(int v, int k)
{
    if(reg == ins[ip].ordreg && ip == ins[ip].ordip)
        flag = 1;
    else
    {
        ins[ip].ordreg = reg;
        ins[ip].ordip = ip;
    }
    if(reg < v)
        ip = k;
    else
        ip++;
}

void bgt(int v, int k)
{
    if(reg == ins[ip].ordreg && ip == ins[ip].ordip)
        flag = 1;
    else
    {
        ins[ip].ordreg = reg;
        ins[ip].ordip = ip;
    }
    if(reg > v)
        ip = k;
    else
        ip++;
}
