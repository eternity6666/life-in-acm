#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <algorithm>
#define usefre

using namespace std;


struct node{
   int hp;
   int atk;
};

vector <node> v1;

bool hpcomp(node a, node b){
   return (a.hp < b.hp);
}

bool atkcomp(node a, node b){
   return (a.atk > b.atk);
}

int sumatk(){
   int sum = 0;
   for(int i = 0; i < v1.size(); i++)
       sum = sum + v1[i].atk;
   return sum;
}

int main(){

#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    
   int T;
   cin>> T;

   for(int i = 1 ; i <= T; i++)
   {
       cout<< "Case #"<< i<< ": ";
       int n;
       cin>> n;
       node node_1;
       int a, b;
       for(int j = 0; j < n ; j ++)
       {
           cin>> a>> b;
           node_1.hp = a;
           node_1.atk = b;
           v1.push_back(node_1);
       }
       sort(v1.begin(), v1.end(), hpcomp);
       sort(v1.begin(), v1.end(), atkcomp);

     // for(int j = 0; j < v1.size(); j++)
     // cout<< v1[j].hp<< ' '<< v1[j].atk<< endl;

       int sum = 0;
       int sumatk1 = sumatk();
       for(int j = 0; j < v1.size(); j++)
       {
           for(int k = 1; k < 1000; k++)
           {
               sum = sum + sumatk1;
               v1[j].hp = v1[j].hp - k;
               if(v1[j].hp <= 0)
               {
                   sumatk1 = sumatk1 - v1[j].atk;
                   break;
               }
           }
       }
       cout<< sum<< endl;
       v1.clear();
   }
   return 0;
}


