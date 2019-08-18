#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 1010;

int n, p, q;

int findX(int x)
{
    if(x == fa[x]) return x;
}
int main()
{
    while(~scanf("%d%d%d", &n, &p, &q) && (n + p + q))
    {

    }
    return 0;
}

/*
2 1 1
1 2 no
2 1 no
no

3 2 1
1 1 yes
2 2 yes
3 3 yes
noE

2 2 1
1 2 yes
2 3 no
1
2
end

5 4 3
1 2 yes
1 3 no
4 5 yes
5 6 yes
6 7 no
0 0 0
3
4
5
6
end
*/
