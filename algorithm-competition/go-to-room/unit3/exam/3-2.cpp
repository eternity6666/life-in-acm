#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define usefre

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
#endif
    int a[4] = {0};
    float f[4] = {12.01, 1.008, 16.00, 14.01};
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int j = i + 1;
        switch (s[i])
        {
        case 'C':
            if (s[j] != 'C' && s[j] != 'N' && s[j] != 'O' && s[j] != 'H' && j < s.length())
                a[0] += s[++i] - '0';
            else
                a[0] += 1;
            break;
        case 'H':

            if (s[j] != 'C' && s[j] != 'N' && s[j] != 'O' && s[j] != 'H' && j < s.length())
                a[1] += s[++i] - '0';
            else
                a[1] += 1;
            break;
        case 'O':
            if (s[j] != 'C' && s[j] != 'N' && s[j] != 'O' && s[j] != 'H' && j < s.length())
                a[2] += s[++i] - '0';
            else
                a[2] += 1;
            break;
        case 'N':
            if (s[j] != 'C' && s[j] != 'N' && s[j] != 'O' && s[j] != 'H' && j < s.length())
                a[3] += s[++i] - '0';
            else
                a[3] += 1;
            break;
        } 
        /*
        if (s[i] == 'C')
        {
            if (s[j] != 'C' && s[j] != 'N' && s[j] != 'O' && s[j] != 'H' && j < s.length())
                a[0] += s[++i] - '0';
            else
                a[0] += 1;
        }
        if (s[i] == 'H')
        {
            if (s[j] != 'C' && s[j] != 'N' && s[j] != 'O' && s[j] != 'H' && j < s.length())
                a[1] += s[++i] - '0';
            else
                a[1] += 1;
        }
        if (s[i] == 'O')
        {
            if (s[j] != 'C' && s[j] != 'N' && s[j] != 'O' && s[j] != 'H' && j < s.length())
                a[2] += s[++i] - '0';
            else
                a[2] += 1;
        }
        if (s[i] == 'N')
        {
            if (s[j] != 'C' && s[j] != 'N' && s[j] != 'O' && s[j] != 'H' && j < s.length())
                a[3] += s[++i] - '0';
            else
                a[3] += 1;
        }
        */
    }
    float sum = 0;
    for (int i = 0; i < 4; i++)
    {
        // cout << a[i] * f[i] << endl;
        sum += a[i] * f[i];
    }
    cout << sum << "g/mol" << endl;

    return 0;
}