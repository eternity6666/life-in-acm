#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

#define usefre

string flag;

bool cmp(char tmp);

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int num;
    string ans[] = {"You win.", "You chickened out.", "You lose."};
    string guess;
    while (cin >> num&&num!=-1)
    {
        int chance = 7;
        int ans_tmp=3;
        cout << "Round " << num << endl;
        cin >> flag >> guess;
        int left = flag.length();
        for (int i = 0; i < guess.length(); i++)
        {
            if (!cmp(guess[i]))
            {
                chance--;
            }
            else
            {
                left--;
            }
            if (chance == 0)
            {
                ans_tmp = 2;
                break;
            }
            if (left == 0)
            {
                ans_tmp = 0;
                break;
            }
        }
        if (ans_tmp == 3 && chance != 0)
        {
            ans_tmp = 1;
        }
        cout << ans[ans_tmp] << endl;
    }
}
//判断guess[i]是否在flag中
bool cmp(char tmp)
{
    for (int i = 0; i < flag.length(); i++)
    {
        if (flag[i] == tmp)
        {
            //yes,return ture;
            return true;
        }
    }
    //no,return flase;
    return false;
}