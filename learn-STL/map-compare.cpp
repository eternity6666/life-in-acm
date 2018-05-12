#include <iostream>
#include <map>
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
    bool operator<(const Info &a) const
    {
        return a.score < score;
    }
};
int main()
{
    cout << "插入元素，依次为25:y,90:s,67:x,24:a,90:m" << endl;
    map<int, char, myComp> m; //当元素不是结构体时，编写比较函数
    m[25] = 'y';
    m[90] = 's';
    m[67] = 'x';
    m[24] = 'a';
    m[90] = 'm';
//m[90]='m'将把m[90]='s'覆盖

    map<int, char>::iterator it;
    cout << "中序遍历集合中的元素" << endl;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }

    map<int,char>::reverse_iterator rit;
    cout << "反向遍历集合中的元素" << endl;
    for (rit = m.rbegin(); rit != m.rend(); rit++)
    {
        cout << (*rit).first << " : " << (*rit).second << endl;
    }

    //定义元素类型为Info的结构体的集合对象s，当前没有任何元素
    map<Info,int> mm;
    cout<<"插入键值为结构体的元素"<<endl;
    Info info;
    info.name = "Jack";
    info.score = 89;
    mm[info]=25;
    info.name = "Tom";
    info.score = 78;
    mm[info]=10;
    info.name = "Nacy";
    info.score = 90;
    mm[info]=20;
    map<Info,int>::iterator it1;
    cout<<"正序遍历容器中的元素"<<endl;
    for (it1 = mm.begin(); it1 != mm.end(); it1++)
    {
        cout<<(*it1).second<<" : ";
        cout << ((*it1).first).name << " : " << ((*it1).first.score)<< endl;
    }
    return 0;
}