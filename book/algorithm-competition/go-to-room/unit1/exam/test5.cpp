#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float all;
    all=n*95;
    if(all>=300)
    {
        all=all*.85;
    }
    printf("%.2f",all);
}