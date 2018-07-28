//合并筛选法的优化方案
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <malloc.h>
#include <string.h>
#define NUM 10000000

int Test_prime(int n)
{
    int i, j;
    // 素数数量统计 
    int count = 0;
    // 分配素数标记空间，明白+1原因了吧，因为浪费了一个num[0]
    char *num = (char*)malloc( n+1 );
    // 干嘛用的，请仔细研究下文
    int mpLen = 2*3*5*7*11*13;
    char magicPattern[2*3*5*7*11*13];
    // 奇怪的代码，想！ 
    for (i=0; i<mpLen; i++)
    {
        magicPattern[i++] = 1;
        magicPattern[i++] = 0;
        magicPattern[i++] = 0;
        magicPattern[i++] = 0;
        magicPattern[i++] = 1;
        magicPattern[i] = 0;
    }
    for (i=4; i<=mpLen; i+=5)
    {
        magicPattern[i] = 0;
    }
    for (i=6; i<=mpLen; i+=7)
    {
        magicPattern[i] = 0;
    }
    for (i=10; i<=mpLen; i+=11)
    {
        magicPattern[i] = 0;
    }
    for (i=12; i<=mpLen; i+=13)
    {
        magicPattern[i] = 0;
    }
    
    // 新的初始化方法,将2,3,5,7,11,13的倍数全干掉
    // 而且采用memcpy以mpLen长的magicPattern来批量处理 
    int remainder = n%mpLen;
    char* p = num+1;
    char* pstop = p+n-remainder;
    while (p < pstop)
    {
        memcpy(p, magicPattern, mpLen);
        p += mpLen;
    }
    if (remainder > 0)
    {
        memcpy(p, magicPattern, remainder);
    }
    num[2] = 1;
    num[3] = 1;
    num[5] = 1;
    num[7] = 1;
    num[11] = 1;
    num[13] = 1;
    
    // 从17开始过滤，因为2,3,5,7,11,13的倍数早被去掉了 
    // 到n/13止的
    int stop = n/13;
    for (i=17; i <= stop; i++)
    {
        // i是合数
        if (0 == num[i]) 
        {
            continue;
        }
        
        // 从i的17倍开始过滤
        int step = i*2;
        for (j=i*17; j <= n; j+=step)
        {
            num[j] = 0;
        }
    }
    
    // 统计素数个数
    for (i=2; i<=n; i++)
    {
        if (num[i]) 
        {
            count++;
        }
    }
    
    // 释放内存
    free(num);
    
    return count;
}
int main()
{
    int count;
    clock_t start,end;
    start = clock();
    count = Test_prime(NUM);
    end = clock();
    printf("%d 内的素数个数为：%d, 总共耗时为：%ld 毫秒\n", NUM, count, end - start);
    
    return 0;
}