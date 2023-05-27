#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef    map<int, string, less<int> >        MAP_INT_STRING; 
    //将特例类型取名为MAP_INT_STRING，集合按升序排列

int main()
{
    MAP_INT_STRING   mapIStr;

           //向mapIStr插入4个元素,注意insert函数的参数类型为MAP_INT_STRING::value_type
    mapIStr.insert(MAP_INT_STRING::value_type(1800, "张三")); 
    mapIStr.insert(MAP_INT_STRING::value_type(1801, "李四"));
    mapIStr.insert(MAP_INT_STRING::value_type(1802, "王五"));
    mapIStr.insert(MAP_INT_STRING::value_type(1803, "赵六"));

    cout << "1.初始化mapIStr的内容为:";
    MAP_INT_STRING::iterator  p;
       // MAP_INT_STRING::iterator为容器MAP_INT_STRING专有的迭代器，它是双向迭代器
    for (p = mapIStr.begin(); p != mapIStr.end(); p++)
        cout << "(" << p->first << ", " << p->second << ")" << "   ";
	cout << endl;

    cout << "2.在mapIStr中查找关键字为1802的元素: ";
    p = mapIStr.find(1802);
    if (p == mapIStr.end())
        cout << "mapIStr中没有关键字为1802的元素";
    else
        cout << "(" << p->first << ", " << p->second << ")" << endl;

    mapIStr.erase(1803);    //去掉集合中值关键字为1803的元素
        cout << "3.调用erase方法后，mapIStr的内容为: ";
    for (p = mapIStr.begin(); p != mapIStr.end(); p++)
        cout << "(" << p->first << ", " << p->second << ")" << "   ";
	cout << endl;

    return 0;
}