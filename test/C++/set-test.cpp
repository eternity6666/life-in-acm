#include <iostream>
#include <set>
#include <cstdio>
#include <ctime>
using namespace std;

#define freout freopen("set-test.out", "w", stdout)
#define huanhang cout<<endl<<endl;

const int test_N=1000000;
void for_time_test();
void find_time_test();
int main()
{
    freout;

    //生成一个存储了0-9的set容器
    set<int> n;
    for (int i = 0; i < 10; i++)
    {
        n.insert(i);
    }

    cout << "set容器中有:" << endl;
    set<int>::iterator it0;
    for (it0 = n.begin(); it0 != n.end(); it0++)
    {
        cout << *it0 << ' ';
    }
    huanhang;

    cout << "在set容器中查找键值为1的元素:" << endl;
    set<int>::iterator it1;
    it1 = n.find(1);
    if (it1 != n.end())
    {
        cout << *it1;
    }
    huanhang;

    cout<<"删除set容器中键值为1的元素"<<endl;
    set<int>::iterator it2;
    it2 = n.find(1);
    if(it2!=n.end())
    {
        // n.erase(*it2);
        n.erase(it2);
    }
    cout << "set容器中现在有:" << endl;
    for (it0 = n.begin(); it0 != n.end(); it0++)
    {
        cout << *it0 << ' ';
    }
    huanhang;

    cout<<"测试find()函数的时间复杂度"<<endl;
    find_time_test();
    cout<<endl;
    cout<<"测试for的时间复杂度"<<endl;
    for_time_test();
    huanhang;

}

void find_time_test()
{
    set<int> test;
    for(int i=0;i<test_N;i++)
    {
        test.insert(i);
    }
    set<int>::iterator it;
    clock_t start,end;
    start=clock();
    it=test.find(*test.end());
    end=clock();
    double use_time=(double)(end-start)/CLOCKS_PER_SEC;
    cout<<use_time;
}

void for_time_test()
{
    set<int> test;
    for(int i=0;i<test_N;i++)
    {
        test.insert(i);
    }
    set<int>::iterator it;
    clock_t start,end;
    start=clock();
    for(it=test.begin();it!=test.end();it++){}
    end=clock();
    double use_time=(double)(end-start)/CLOCKS_PER_SEC;
    cout<<use_time;
}