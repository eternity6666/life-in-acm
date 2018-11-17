#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
using namespace std;
#define usefre
struct groupNode{
    int p;
    int a;
    int c;
    int m;
    int g;
};

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int N;
    scanf("%d", &T);
    vector<groupNode> t;
    for(int i = 1; i <= T; i++)
    {
        groupNode tmp;
        scanf("%d %d %d %d %d", &tmp.p, &tmp.a, &tmp.c, &tmp.m, &tmp.g);
    }
    int P, A, C, M;
    scanf("%d %d %d %d", &P, &A, &C, &M);
    
    return 0;
}