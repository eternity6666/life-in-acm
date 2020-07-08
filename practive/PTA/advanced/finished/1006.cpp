#include <iostream>
using namespace std;
struct node
{
    string name;
    string in;
    string out;
};

int tLen = 8;
bool isEarly(string a, string b)
{
    for (int i = 0; i < tLen; ++i)
        if (a[i] != b[i])
            return a[i] < b[i];
    return false;
}

int main()
{
    int m;
    cin >> m;
    string name1, in;
    string name2, out;
    for (int i = 0; i < m; i++)
    {
        node no;
        cin >> no.name >> no.in >> no.out;
        if (i == 0)
        {
            name1 = name2 = no.name;
            in = no.in;
            out = no.out;
        }
        else
        {
            if (isEarly(no.in, in))
                name1 = no.name, in = no.in;
            if (isEarly(out, no.out))
                name2 = no.name, out = no.out;
        }
    }
    cout << name1 << " " << name2 << endl;
    return 0;
}