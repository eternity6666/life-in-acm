#include <bits/stdc++.h>
using namespace std;

// #define syfre

// void output(float array[],int k[],int n);
int main()
{
#ifdef syfre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    vector<int> num;
    int array[5]={0};
    int k[5]={0};
    int tmp;
    int geshu;
    cin>>geshu;
    while(cin>>tmp)
    {
        num.push_back(tmp);
    }
    vector<int>::iterator it;
    int sign=1,number3=0,a2;
    for(it=num.begin();it!=num.end();it++)
    {
        if(*it%10==0)
        {
            array[0]+=*it;
            k[0]++;
        }
        else if(*it%5==1)
        {
            k[1]++;
            array[1]+=(*it)*sign;
            sign=-sign;
            // cout<<*it<<" "<<sign<<" "<<array[1]<<endl;
        }
        else if(*it%5==2)
        {
            k[2]++;
            array[2]++;
        }
        else if(*it%5==3)
        {
            k[3]++;
            number3++;
            array[3]+=*it;
            // cout<<array[3]<<endl;
        }
        else if(*it%5==4)
        {
            k[4]++;
            if(*it>array[4])
            {
                array[4]=*it;
            }
        }
        // cout<<endl;
        // sign=-sign;
    }
    int i=0;
    if(k[i++]==0)
    {
        cout<<"N ";
    }
    else
    {
        cout<<array[i-1]<<" ";
    }
    if(k[i++]==0)
    {
        cout<<"N ";
    }
    else
    {
        cout<<array[i-1]<<" ";
    }
    if(k[i++]==0)
    {
        cout<<"N ";
    }
    else
    {
        cout<<array[i-1]<<" ";
    }
    if(k[i++]==0)
    {
        cout<<"N ";
    }
    else{
        printf("%.1lf ",1.0*array[i-1]/number3);
    }
    if(k[i++]==0)
    {
        cout<<"N";
    }
    else{
        cout<<array[i-1];
    }
    return 0;
}