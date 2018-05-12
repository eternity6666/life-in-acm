#include <iostream>
#include <set>
using namespace std;
struct myComp
{
    bool operator()(const int &a, const int &b)
    {
        if (a != b)
            return a > b;
        else
            return a > b;
    }
};

int main()
{
    cout << "再次插入元素，依次为8,7,98,81203,99,99,1" << endl;
    set<int, myComp> ss;
    ss.insert(8);
    ss.insert(7);
    ss.insert(98);
    ss.insert(81203);
    ss.insert(99);
    ss.insert(99);
    ss.insert(1);

    set<int>::iterator it;
    cout << "中序遍历集合中的元素" << endl;
    for (it = ss.begin(); it != ss.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    set<int>::reverse_iterator rit;
    cout << "反向遍历集合中的元素" << endl;
    for (rit = ss.rbegin(); rit != ss.rend(); rit++)
    {
        cout << *rit << " ";
    }
    cout << endl;
}