#include <iostream>
#include <fstream>
// #include <vector>
#include <string>
#include <cstring>
// #define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    // int endlFlag=0;
    int flag; //flag=0:cout<<" ";flag=1:discout<<" ";
    string tmp;
    while (cin >> tmp)
    {
        if (tmp == "START")
        {
            flag = 0;
            // if(endlFlag)
            // {
            //     cout<<endl;
            // }
            // endlFlag=1;
            continue;
        }
        else if (tmp == "END")
        {
            cout<<endl;
            continue;
        }
        else if (tmp == "ENDOFINPUT")
        {
            break;
        }
        else 
        {
            if (flag)
            {
                cout << " ";
            }
            flag = 1;
            for (int i = 0; i < tmp.length(); i++)
            {
                char a_tmp = tmp[i];
                if (a_tmp >= 'A' && a_tmp <= 'E')
                {
                    a_tmp = a_tmp - 'A' + 'V';
                }
                else if (a_tmp >='F'&&a_tmp<='Z')
                {
                    a_tmp = a_tmp - 'F' + 'A';
                }
                else
                {
                    a_tmp = a_tmp;
                }
                cout << a_tmp;
            }
        }
    }
}