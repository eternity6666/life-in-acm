#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
// #define usefre
using namespace std;
struct monster
{
    int hp;
    int atk;
};
int sumatk(vector<monster>::iterator it1,vector<monster>::iterator it2);
bool hpComp(const monster &a, const monster &b);
bool atkComp(const monster &a, const monster &b);
int main()
{
    #ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    int num = 0;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b;
        vector<monster> allMonsters;
        while (n-- && cin >> a >> b)
        {
            monster mon;
            mon.hp = a;
            mon.atk = b;
            allMonsters.push_back(mon);
        }
        cout << "Case #" << ++num << ": ";

        sort(allMonsters.begin(), allMonsters.end(), hpComp);
        sort(allMonsters.begin(), allMonsters.end(), atkComp);

        int sum = 0;
        int sumatk1 = sumatk(allMonsters.begin(),allMonsters.end());
        for (int j = 0; j < allMonsters.size(); j++)
        {
            for (int k = 1; k < 1000; k++)
            {
                sum = sum + sumatk1;
                allMonsters[j].hp = allMonsters[j].hp - k;
                if (allMonsters[j].hp <= 0)
                {
                    sumatk1 = sumatk1 - allMonsters[j].atk;
                    break;
                }
            }
        }
        cout << sum << endl;
        allMonsters.clear();
    }
    return 0;
}

bool hpComp(const monster &a, const monster &b)
{
    if (a.hp != b.hp)
        return a.hp < b.hp;
    else
        return a.hp < b.hp;
}

bool atkComp(const monster &a, const monster &b)
{
    if (a.atk != b.atk)
        return a.atk > b.atk;
    else
        return a.atk > b.atk;
};
int sumatk(vector<monster>::iterator it1,vector<monster>::iterator it2)
{
    int sum = 0;
    for (;it1!=it2;it1++)
        sum = sum + (*it1).atk;
    return sum;
}