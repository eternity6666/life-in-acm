//1-4-1.cpp:测试scanf函数,&a没有&号时的情况
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",a,b);
    printf("%d\n",a+b);
    return 0;
}

