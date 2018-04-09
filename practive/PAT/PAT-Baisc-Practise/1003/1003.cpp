#include <iostream>
#include <stdio.h>

using namespace std;

// FILE *fq;

// #define fq() fopen("./tmp","r");

bool panduan(string a);

int main()
{
    FILE *fq;
    fq=fopen("./tmp","r");
    int n;
    cin >> n;
    string str[9];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (panduan(str[i]))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

bool panduan(string a)
{
    int i;
    for (i = 0; i < a.length(); i++)
    {
        if (a[i] != 'P' && a[i] != 'A' && a[i] != 'T')
        {
            return false;
        }
    }
    if (i == a.length())
        return true;
}