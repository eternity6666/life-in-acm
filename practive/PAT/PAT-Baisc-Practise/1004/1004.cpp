#include <iostream>
#include <fstream>
using namespace std;

#define fp fopen("./tmp.txt","r")

struct student{
    string name;
    string id;
    int score;
    struct student *next;
};

int main(){
    fp;
    int n,i=0;
    cin>>n;
    struct student *p,*q,*head;
    head = p;
    do{
        cin>>p->name>>p->id>>p->score;
        p->next=q;
        p=q;
        struct student q;
        i++;
    }while(i<n);
    int max=head->score;
    int min=head->score;
    p=head;
    struct student *ma,*mi;
    for(i=1;i<n;i++){
        if(max<p->score){
            max=p->score;
            ma=p;
        }
        if(min>p->score){
            min=p->score;
            mi=p;
        }
        q=p->next;
    }
    cout<<ma->name<<" "<<ma->id<<endl;
    cout<<mi->name<<" "<<mi->id<<endl;
}