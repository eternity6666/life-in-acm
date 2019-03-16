#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100000 + 5;

int n, zz;

int arr[maxn];
int arr2[maxn];
int findT(int t)
{
    if(arr2[t] != 1)
        return arr2[t];
    else
        return arr[t] == -1 ? arr2[t] : arr2[t] = findT(arr2[t] + 1);
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    fei(1, n)
    {
        cin >> arr[i];
        arr2[i] = 1;
        if(arr[i] == -1)
            zz = i;
    }
    set<int> ans;
    int max = 0;
    fei(1, n)
    {
        arr2[i] = arr2[i] + findT(arr2[i]);
        if(max < arr2[i])
            max = arr2[i];
    }
    set<int> se;
    fei(1, n)
        if(max == arr2[i])
            se.insert(i);
    /*
    queue<int> q;
    q.push(zz); 
    while(!q.empty())
    {

    }
    */

    set<int>::iterator it;
    for(it = ans.begin(); it != ans.end(); it++)
    {
        if(it != ans.begin())
            cout << " ";
        cout << *it;
    }
    cout << endl;
    return 0;
}


