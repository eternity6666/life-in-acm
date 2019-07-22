#include <bits/stdc++.h>
using namespace std;
#define usefre
void output_answer(int n,int m);
int main()
{
#ifdef usefre
freopen("2-4-in.txt","r",stdin);
freopen("2-4-out.txt","w",stdout);
#endif

vector<int> num;
int tmp;
while(cin>>tmp&&tmp)
{
    num.push_back(tmp);
}
int ca=num.size()/2;
vector<int>::iterator it;
for(it=num.begin();it!=num.end();)
{
    if(it!=num.begin())
    {
        cout<<endl;
    }
    cout<<"Case "<<num.size()/2-ca--+1<<": ";
    output_answer(*it++,*it++);
}

}

void output_answer(int n,int m)
{
    // cout<<n<<endl<<m<<endl;
    double answer=0;
    for(int i=m;i<=n;i++)
    {
        answer+=1.0/(i*i);
    }
    printf("%.5lf",answer);
}