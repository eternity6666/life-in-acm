#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void outByIterator(vector<double> v);

int main()
{
    //创建对象的三种方法
    //创建时，不指定容器的元素的个数
    vector<int> v1;
    //创建时，指定容器的大小
    vector<double> v2(5);
    //创建一个具有n个元素的向量容器对象，每个元素具有指定的初始值
    vector<double> v3(5, 4.9); //此时v3有10个值为8.6的元素

    //尾部元素扩张
    v1.push_back(1); //此时v1有一个元素1
    cout << "此时v1中的元素为：" << endl
         << v1[0] << endl;

    //下标方式访问vector元素
    v2[0] = 1;
    v2[1] = 2;
    v2[2] = 3;
    cout << "此时v2中的元素为:" << endl
         << v2[0] << " " << v2[1] << " " << v2[2] << endl;

    cout << "插入元素前,v3";
    outByIterator(v3);
    //元素的插入
    v3.insert(v3.begin(), 3);
    v3.insert(v3.begin() + 2, 4);
    v3.insert(v3.end(), 5);
    cout << "插入元素后，v3";
    outByIterator(v3);

    //元素的删除
    v3.erase(v3.begin() + 1, v3.begin() + 5);
    cout << "删除了原来的第1-5区间的所有元素后，v3";
    outByIterator(v3);

    vector<double> v4(10);
    //给向量赋值
    for (int i = 0; i < 10; i++)
    {
        v4[i] = i;
    }
    cout << "v4";
    outByIterator(v4);
    //反向排列向量的从首到尾间的元素
    reverse(v4.begin(), v4.end());
    cout << "反向排列向量后，v4";
    outByIterator(v4);

    //使用algorithm头文件中的sort算法对向量元素进行升序排列
    sort(v4.begin(), v4.end());
    cout << "使用sort算法后，v4";
    outByIterator(v4);

    //使用size()方法返回向量的大小，即元素的个数
    cout << "v4中有" << v4.size() << "个元素" << endl;

    //使用empty()方法返回向量是否为空
    cout << "如果向量为空,返回1;否则返回0:" << v4.empty() << endl;

    //清空v4中的元素
    v4.clear();
    cout << "如果向量为空,返回1;否则返回0:" << v4.empty() << endl;
}
void outByIterator(vector<double> v)
{
    //用迭代器访问vector元素
    vector<double>::iterator it;
    cout << "中的元素为：" << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}