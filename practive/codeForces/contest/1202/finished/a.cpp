// #include <iostream>
// #include <queue>
// #include <utility>
// using namespace std;
// const int maxn = 1e5 + 10;

// struct P{
//     string first;
//     int second;
//     P(){}

//     P(string a, int b)
//     {
//         first = a, second = b;
//     }

//     bool operator < (const P &a) const &
//     {
//         if(a.first != first) return a.first < first;
//         return a.second < second;
//     }
// };

// string add(string a, string b)
// {
//     string c = "";
//     int alen = a.length();
//     int blen = b.length();
//     string tmp = "0";
//     int i, j;
//     for (i = alen - 1, j = blen - 1; i >= 0 && j >= 0; i--, j--)
//     {
//         tmp = tmp + a[i] + b[j];
//         int k1 = 0;
//         for (int k = 0; k < 3; k++)
//             if (tmp[k] == '1')
//                 k1++;
//         c = c + (k1 % 2 == 1 ? "1" : "0");
//         tmp = (k1 / 2 > 0 ? "1" : "0");
//     }
//     while (i >= 0)
//     {
//         tmp = tmp + a[i--];
//         int k1 = 0;
//         for (int k = 0; k < 2; k++)
//             if (tmp[k] == '1')
//                 k1++;
//         c = c + (k1 % 2 == 1 ? "1" : "0");
//         tmp = (k1 / 2 == 1 ? "1" : "0");
//     }
//     while (j >= 0)
//     {
//         tmp = tmp + b[j--];
//         int k1 = 0;
//         for (int k = 0; k < 2; k++)
//             if (tmp[k] == '1')
//                 k1++;
//         c = c + (k1 % 2 == 1 ? "1" : "0");
//         tmp = (k1 / 2 == 1 ? "1" : "0");
//     }
//     if (tmp == "1")
//         c = c + tmp;
//     return myre(c);
// }

// string mutiply(string a, string b)
// {
//     string c = "0";
//     int alen = a.length();
//     int blen = b.length();
//     if (alen < blen)
//     {
//         for (int i = alen - 1; i >= 0; i--)
//         {
//             if (a[i] == '1')
//                 c = add(c, b);
//             // cout << c << endl;
//             b = b + "0";
//         }
//     }
//     else
//     {
//         for (int i = blen - 1; i >= 0; i--)
//         {
//             if (b[i] == '1')
//                 c = add(c, a);
//             // cout << c << endl;
//             a = a + "0";
//         }
//     }
//     return c;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string a, b;
//         cin >> a >> b;
//         cout <<mutiply(a,b) << endl;
//         /*
//         string s = "1";
//         int alen = a.length();
//         int blen = b.length();
//         int tmp = 1+(alen<blen?blen-alen+1:alen-blen+1);
//         priority_queue<P> q;
//         for(int i = 0; i < tmp; i++)
//         {
//             q.push(P(myre(add(a, mutiply(b, s))), i));
//             s = s + "0";
//         }
//         P u = q.top();
//         // cout << u.first << endl;
//         cout << u.second << endl;
//         */
//     }
//     return 0;
// }

/* 3
10001 110
10001 011
posy=1
posx=4
10001 + 110*1000
010001 + 110000
1000001
1000001
*/

// /* 1
// 1010 11
// 0101 11
// posy = 0
// */

#include <iostream>
#include <cstring>
using namespace std;

string myre(string c)
{
    string d = "";
    int clen = c.length();
    for(int i = clen-1; i>=0; i--)
        d+= c[i];
    return d;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    int t; cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int alen = a.length();
        int blen = b.length();
        a = myre(a);
        b = myre(b);
        int poxa, poxb;
        for(int i = 0; i < blen; i++)
            if(b[i] == '1')
            {
                poxb = i;
                break;
            }
        for(int i = poxb; i < alen; i++)
            if(a[i] == '1')
            {
                poxa = i;
                break;
            }
        cout << poxa - poxb << endl;
    }
    return 0;
}