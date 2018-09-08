#include <bits/stdc++.h>
using namespace std;
const int maxn = 10000000 + 5;
bool visit[maxn];

void getPrime(int n);

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int n;
    cin >> n;
    getPrime(n);
    int num = 0;
    for(int i = 2; i < n; i++)
        if(!visit[i])
        {
            stringstream ss;
            ss << i;
            string s;
            ss >> s;
            bool flag = 1;
            if(s.find('0') < 100) flag = 0;
            if(s.find('2') < 100) flag = 0; 
            if(s.find('4') < 100) flag = 0;
            if(s.find('5') < 100) flag = 0; 
            if(s.find('6') < 100) flag = 0;
            if(s.find('8') < 100) flag = 0; 
            if(s.find('9') < 100) flag = 0;
            if(s.find("11") < 100) flag = 0;
            if(s.find("33") < 100) flag = 0;
            if(s.find("77") < 100) flag = 0;
            if(s.find("171") < 100) flag = 0;
            if(s.find("371") < 100) flag = 0;
            if(s.find("713") < 100) flag = 0;
            if(s.find("717") < 100) flag = 0;  
            if(s.find("731") < 100) flag = 0;
            if(s.find("737") < 100) flag = 0;
            if(s.find("1313") < 100) flag = 0;
            if(flag)
            {
                cout << i << " ";
                num++;
            }
            if(num == 5)
            {
                num = 0;
                cout << endl;
            }
            //cout << i << endl;
        }
    return 0;
}

void getPrime(int n)
{
    visit[0] = 1;
    visit[1] = 1;
    for(long long i = 2; i < n; i++)
    {
        if(!visit[i])
            for(long long k = i; i * k < n; k++)
                visit[i * k] = 1;
    }
}
