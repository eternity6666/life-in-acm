#include <bits/stdc++.h>
using namespace std;
struct node
{
    char name[100];
    int win;
    int lose;
    int points;
};

//node contest[1000];

int got_points(int a, int b);

bool comp(node a, node b)
{
    if(a.points != b.points)
        return (a.points > b.points);
    else
    {
        if((a.win - a.lose) != (b.win - b.lose))
            return (a.win - a.lose) > (b.win - b.lose);
        else
        {
            if(a.win != b.win)
                return (a.win > b.win);
            else
                return (a.name < b.name);
        }
    }
    /*
    int as, bs;
    as = (*a).name.size();
    bs = (*b).name.size();
    for(int i = 0; i < as || i < b.as; i++)
    {
        if(i >= as)
            return true;
        if(i >= bs)
            return false;
        if(i < as && i < bs)
        {
            if(a.name[i] == b.name[i])
                continue;
            else
                return a.name[i] < b.name[i];
        }
    }
    */
    /*
    for(int i = 0; i < a.name.size() || i < b.name.size(); i++)
    {
        if(i < a.name.size() && i < b.name.size())
        {
            if(a.name[i] == b.name[i])
                continue;
            else
                return a.name[i] < b.name[i];
        }
        if(i >= a.name.size())
        {
            return true;
        }
        if(i >= b.name.size())
        {
            return false;
        }
    }
    */
}

/*
bool comp3(const node& a, const node& b)
{
    return a.win > b.win;
}

bool comp2(const node& a, const node& b)
{
    return (a.win - a.lose) > (b.win - b.lose);
}

bool comp1(const node& a, const node& b)
{
    return (a.points > b.points);
}
*/

node contest[1000];
int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n))
    {
        int t = 0;
        for(int i = 0; i < n * (n - 1); i++)
        {
            char t1[100], t2[100], vs[100];
            int p, q;
            int i1, i2;
            i1 = i2 = -1;
            scanf("%s %s %s %d:%d", t1, vs, t2, &p, &q);
            for(int j = 0; j < t; j++)
            {
                if(strcmp(contest[j].name, t1) == 0)
                    i1 = j;
                if(strcmp(contest[j].name, t2) == 0)
                    i2 = j;
                if(i1 != -1 && i2 != -1)
                    break;
            }
            if(i1 == -1)
            {
                i1 = t++;
                strcpy(contest[i1].name, t1);
                contest[i1].win = contest[i1].lose = contest[i1].points = 0;
            }
            contest[i1].win += p;
            contest[i1].lose += q;
            contest[i1].points += got_points(p, q);
            if(i2 == -1)
            {
                i2 = t++;
                strcpy(contest[i2].name, t2);
                contest[i2].win = contest[i2].lose = contest[i2].points = 0;
            }
            contest[i2].win += q;
            contest[i2].lose += p;
            contest[i2].points += got_points(q, p);
        }

        /*
        sort(contest, contest + t, comp4);
        sort(contest, contest + t, comp3);
        sort(contest, contest + t, comp2);
        */
        sort(contest, contest + n, comp);

        for(int i = 0; i < n; i++)
            cout << contest[i].name << " " << contest[i].points << endl;
        cout << endl;
    }
    return 0;
}

int got_points(int a, int b)
{
    if(a > b)
        return 3;
    else if(a < b)
        return 0;
    else
        return 1;
}
