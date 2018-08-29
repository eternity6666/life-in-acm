#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int N;
    scanf("%d", &N);
    while(N--)
    {
        string a;
        cin >> a;
        char c = a[0];
        int n = 1;
        for(int i = 1; i < a.size(); i++)
        {
            if(c == a[i])
                n++;
            else
            {
                if(n > 1)
                    printf("%d%c", n, c);
                else
                    printf("%c", c);
                c = a[i];
                n = 1;
            }
        }
        if(n > 1)
            printf("%d%c\n", n, c);
        else
            printf("%c\n", c);
    }
    return 0;
}
