#include <bits/stdc++.h>
using namespace std;
// #define usefre
/*
struct myComp //当元素不是结构体时，编写比较函数
{
    bool operator()(const int &a, const int &b)
    {
        if (a != b)
            return a > b;
        else
            return a > b;
    }
};
*/

void deal(vector<int> a, int k);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n, k;
    // cin>>n>>k;
    int tmp;
    while (cin >> n >> k)
    {
        vector<int> a;
        // vector<int> b;
        // set<int,myComp> s;
        while (n-- && cin >> tmp)
        {
            a.push_back(tmp);
            // s.insert(tmp);
        }
        // clock_t start,end;
        // start=clock();
        deal(a, k);
        cout<<endl;
        // end=clock();
    // double n=(double)(end-start)/CLOCKS_PER_SEC;
    // cout<<n<<endl;
        
    }
    return 0;
}

void deal(vector<int> a, int k)
{
    vector<int>::iterator it, it1, maxit;
    int tmp;
    int max;
    it = a.begin();
    while (it != a.end())
    {
        max = *it;
        for (it1 = it; it1 != a.end(); it1++)
        {
            if (max < *it1)
            {
                max = *it1;
                maxit = it1;
            }
        }
        if (k > 0 && max > *it)
        {
            *maxit = *it;
            *it = max;
            k--;
        }
        if(it!=a.begin())
        {
            cout<<" ";
        }
        cout << *it;
        it++;
    }

    //输出
    // for(it=a.begin();it!=a.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
}
