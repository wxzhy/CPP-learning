#include <iostream>
#include <set>             //包含集合头文件
using namespace std;

int main()
{
    int vals[] = {24, 22, 12, 67, 22, 34};
    multiset<int> intMSet(vals, vals + 6);    //用vals来初始化容器intMSet
    multiset<int>::iterator  p;

    cout << "初始化intMSet的内容为: ";
        //multiset<int>::iterator为容器multiset<int>专有的迭代器，它是双向迭代器
    for (p = intMSet.begin(); p != intMSet.end(); p++)
        cout << *p << "   ";
	cout << endl;

    intMSet.insert(44);    //向容器中插入元素44和11
    intMSet.insert(11);
    cout << "插入操作后，intMSet的内容为: ";
    for (p = intMSet.begin(); p != intMSet.end(); p++)
         cout << *p << "   ";
	cout << endl;

    p = intMSet.lower_bound(22);      //返回集合中第一个不小于22的元素
    cout << "intMSet中不小于22的最小的数是: " << *p <<endl;
    p = intMSet.upper_bound(22);      //返回集合中第一个大于22的元素
    cout << "UintMSet中大于22的最小的数是: " << *p<<endl;

    p = intMSet.find(22);    //找到则返回相应迭代器，未找到返回intMSet.end()
    if (p == intMSet.end())
         cout << "22不在intMSet中" << endl;
    else
         cout << "intMSet中22的个数为: " << intMSet.count(22) <<endl;

    intMSet.erase(22);    //去掉集合中值为22的元素
    cout << "调用erase方法后，intMSet的内容为: ";
    for (p = intMSet.begin(); p != intMSet.end(); p++)
          cout << *p << "   ";
	cout << endl;

    return 0;
}