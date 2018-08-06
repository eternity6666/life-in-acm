#include <iostream>
#include <set>
using namespace std;
//自定义比较函数myComp，重载“（）”操作符
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

struct Info //当元素是结构体时，直接把比较函数写在结构体内
{
    string name;
    float score;
    //重载“<”操作符，自定义排序规则
    bool operator < (const Info &a) const
    {
        return a.score < score;
    }
};
int main()
{
    cout << "插入元素，依次为8,7,98,81203,99,99,1" << endl;
    set<int, myComp> ss; //当元素不是结构体时，编写比较函数
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

    //定义元素类型为Info的结构体的集合对象s，当前没有任何元素
    set<Info> s;
    Info info;
    info.name = "Jack";
    info.score = 89;
    s.insert(info);
    info.name = "Tom";
    info.score = 78;
    s.insert(info);
    info.name = "Nacy";
    info.score = 90;
    s.insert(info);
    set<Info>::iterator it1;
    for (it1 = s.begin(); it1 != s.end(); it1++)
    {
        cout << (*it1).name << " : " << (*it1).score << endl;
    }
    return 0;
}