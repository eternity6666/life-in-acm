#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    //定义map对象，当前没有任何元素
    //map<键值类型，数据类型> m;
    map<string, float> m;
    cout << "插入元素,依次是Jack:98.9,Tom:89,Joe:78,Max:90" << endl;
    //map按照键值由小到大插入到黑白树中
    m["Jack"] = 98.9;
    m["Tom"] = 89;
    m["Joe"] = 78;
    m["Max"] = 90;

    cout << "正序输出" << endl;
    //前向遍历元素
    map<string, float>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }

    cout << "反序输出" << endl;
    //反向遍历元素
    map<string, float>::reverse_iterator rit;
    for (rit = m.rbegin(); rit != m.rend(); rit++)
    {
        cout << (*rit).first << " : " << (*rit).second << endl;
    }

    //元素的搜索
    cout << "搜索键值为Tom的元素" << endl;
    it = m.find("Tom");
    if (it != m.end())
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }
    else
    {
        cout << "not find it" << endl;
    }

    
    //删除元素
    cout << "map映照容器使用erase()删除元素" << endl;
    cout << "删除键值为Tom的元素" << endl;
    m.erase("Tom");
    cout << "删除操作之后的剩余元素" << endl;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }

    return 0;
}