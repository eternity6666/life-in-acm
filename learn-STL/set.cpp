#include <set>
#include <iostream>
using namespace std;

int main()
{
    //构造set集合的主要目的是为了快速检索
    //内部结构是平衡二叉检索树

    set<int> s; //定义元素类型为int的集合对象s，当前没有任何元素

    //使用insert()函数给集合添加元素
    cout << "插入元素，依次为8,7,98,81203,99,99,1" << endl;
    s.insert(8);
    s.insert(7);
    s.insert(98);
    s.insert(81203);
    s.insert(99);
    s.insert(99);
    s.insert(1);

    //中序遍历集合中的元素
    set<int>::iterator it; //定义前向迭代器
    //中序遍历集合中的所有元素
    cout << "中序遍历集合中的元素" << endl;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //反向遍历集合中的元素
    set<int>::reverse_iterator rit; //定义反向迭代器
    cout << "反向遍历集合中的元素" << endl;
    for (rit = s.rbegin(); rit != s.rend(); rit++)
    {
        cout << *rit << " ";
    }
    cout << endl;

    //查找元素
    cout << "查找键值为99的元素" << endl;
    it = s.find(99);
    if (it != s.end())
        cout << *it << endl;
    else
        cout << "not find it" << endl;

    cout << "查找键值为22的元素" << endl;
    it = s.find(22);
    if (it != s.end())
        cout << *it << endl;
    else
        cout << "not find it" << endl;

    //删除元素
    s.erase(99); //删除键值为99的那个元素
    cout << "删除键值为99的那个元素之后" << endl;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "清空集合" << endl;
    s.clear();
    cout << s.size() << endl;

    return 0;
}