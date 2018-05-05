#define usefre

#include <bits/stdc++.h>
using namespace std;
int deal(string c, int i);
void showAnswer(string c, int i, int tmp);

string r;
int N;

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    cin >> r;
    cin >> N;
    getchar();
    /*
    cout<<s<<endl;
    cout<<N<<endl;
    */
    string c;
    int i = 0;
    while (cin >> c && c != "#"&&i<=N)
    {
        int tmp = deal(c, ++i);
        showAnswer(c, i, tmp);
        if (tmp == -1 || tmp == 0)
            break;
    }
}

int deal(string c, int i)
{
    if (c == r && i <= N)
        return -1;
    else if (c != r && i == N)
        return 0;
    else if (c != r)
        return 1;
}

void showAnswer(string c, int i, int tmp)
{
    if (tmp == -1)
    {
        cout << "Welcome in";
    }
    else if (tmp == 0)
    {
        cout << "Wrong password: " << c << endl;
        cout << "Account locked";
    }
    else if (tmp == 1)
    {
        cout << "Wrong password: " << c << endl;
    }
}