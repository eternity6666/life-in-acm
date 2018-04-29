#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n;
    scanf("%d",&n);
    int number[2000];
    int a1=0,a2=0,a3=0,a5=0,a4=0;
    int temp=0;
    int k[5] ={0};
    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    for(int i=0;i<n;i++){
        if(number[i]%5==0){
            if(number[i]%2==0){
                a1 = a1+number[i];
                k[0]++;
            }
        }
        else if(number[i]%5==1){
            a2 = a2+number[i];
            a2 = -a2;
            k[1]++;
        }
        else if(number[i]%5==2){
            a3++;
            k[2]++;
        }
        else if(number[i]%5==3){
            a4 = a4+number[i];
            cout<<a4<<endl;
            temp++;
            k[3]++;
        }
        else {
            if(number[i]>a5){
                a5 = number[i];
                k[4]++;
            }
        }
    }
    a2 = -a2;
    if(k[0]==0)
        printf("N ");
    else 
        printf("%d ",a1);
    if(k[1]==0)
        printf("N ");
    else 
        printf("%d ",a2);
    if(k[2]==0)
        printf("N ");
    else 
        printf("%d ",a3);
    if(k[3]==0)
        printf("N ");
    else 
        printf("%.1lf ",1.0*a4/temp);
    if(k[4]==0)
        printf("N");
    else 
        printf("%d",a5);
}