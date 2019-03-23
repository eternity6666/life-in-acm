#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    cin >> n;
    queue<int> qu;
    vector<int> ve;
    while(n--)
    {
        int tmp;
        cin >> tmp;
        ve.push_back(tmp);
        if(tmp == 1)
        {
            int tmp2;
            cin >> tmp2;
            ve.push_back(tmp2);
        }
    }
    vector<int>::iterator it = ve.begin();
    /*
    for(it; it != ve.end(); it++)
        cout << *it << endl;
    it = ve.begin();
    */
    while(it != ve.end())
    {
        bool flag = false;
        switch(*it)
        {
            case 1:
                it++;
                qu.push(*it);
                break;
            case 2:
                if(qu.empty())
                {
                    cout << "no" << endl;
                    flag = true;
                    break;
                }
                else
                {
                    cout << qu.front() << endl;
                    qu.pop();
                }
                break;
            case 3:
                cout << qu.size() << endl;
                break;
        }
        // cout << 1 << endl;
        it++;
        if(it == ve.end())
            break;
        if(flag)
            break;
    }
    /*
    while(n--)
    {
        int code;
        cin >> code;
        bool flag = false;
        switch(code)
        {
            case 1:
                int tmp;
                cin >> tmp;
                qu.push(tmp);
                break;
            case 2:
                if(qu.empty())
                {
                    cout << "no" << endl;
                    flag = true;
                    break;
                }
                else
                {
                    cout << qu.front() << endl;
                    qu.pop();
                }
                break;
            case 3:
                cout << qu.size() << endl;
        }
        if(flag)
            break;
    }
    */
    return 0;
}

