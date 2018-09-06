#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        getchar();
        while(n--)
        {
            bool flag = 1;
            string s;
            getline(cin, s);
            for(int i = 0; i < s.size(); i++)
            {
                if(i == 0)
                    if(s[i] >= '0' && s[i] <= '9')
                        flag = 0;
                if((s[i] >= '0' && s[i] <= '9') || s[i] == '_' || (s[i] >= 'a' && s[i] <= 'z')|| (s[i] >= 'A' && s[i] <= 'Z'))
                    continue;
                else
                    flag = 0;
                if(!flag)
                    break;
            }
            if(flag)
                cout << "Yes" << endl;
            else 
                cout << "No" << endl;
            getchar();
        }
    }
    return 0;
}
