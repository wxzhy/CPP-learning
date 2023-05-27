#include <iostream>
#include <list>
using namespace std;

int main()
{
    int vals[] = {10, 20, 30, 40, 50 };

        //构造一个列表intList，并用vals至vals + 4之间元素初始化
    list<int>  intList(vals, vals + 4);

    cout << "intList中的初始元素: ";
    list<int>::iterator  p;
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl << endl; 

    intList.assign(2, 11);     //将元素11拷贝2份加入到容器中
    cout << "执行assign后，intList中内容: ";
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    list<int>::iterator  itr = intList.begin();
    itr++;    
    //插入元素55
    intList.insert(itr, 55);                         
    cout << "执行insert后，intList中内容: ";
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    list<int>::iterator beg = intList.begin();
    itr++;
    intList.erase(beg, itr);      //将beg到itr之间的元素删除
    cout << "执行erase后, intList中的内容: ";
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    intList.clear();      //清空容器
    cout << "执行clear后, intList中的元素个数: " << intList.size() << endl;
    cout << "是否为空? " << (intList.empty() ? "Yes" : "No")<< endl;    //判断是否空

         //将元素10、20插入到列表头
    intList.push_front(10);                                        
    intList.push_front(20);                                        
    cout << "执行插入操作后, intList中的内容: ";
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    intList.pop_front();    //删除列表头元素
    intList.pop_back();     //删除列尾元素
    cout << "执行删除操作后, intList中的内容: ";
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    int   val1[] = {7, 3, 1, 2};
    list<int>   list1(val1, val1 + 4);
    list1.sort();       //将列表按升序排列
    cout << "按升序排列后, list1: ";
    for (p = list1.begin(); p != list1.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    list<int> list2(list1);
    list1.merge(list2);      //将列表list1、list2合并，list2变为空
    cout << "合并后, list1: ";
    for (p = list1.begin(); p != list1.end(); p++)
        cout << *p << "   ";
	cout << endl ; 
    cout << "list2元素个数为: " << list2.size() << endl ;

    list1.reverse();      //将list1反转
    cout << "将list1反转, list1: ";
    for (p = list1.begin(); p != list1.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

	   //在列表尾部插入元素100
    list1.push_back(100);                                                
    cout << "在list1表尾插入元素, list1: ";
    for (p = list1.begin(); p != list1.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    list1.remove(7);     //将列表中值为7的删除
    cout << "删除值为7的元素, list1: ";
    for (p = list1.begin(); p != list1.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    list2.assign(3, 2);    //将元素2拷贝3份加入到列表list2中
    cout << "执行assign后, list2: ";
    for (p = list2.begin(); p != list2.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    p = list2.begin();
    p++;
    list2.splice(p, list1);   //将list1的元素移到list2首元素之前，list1变为空
    cout << "将列表list1中元素移到list2, list2变为: ";
    for (p = list2.begin(); p != list2.end(); p++)
        cout << *p << "   ";
	cout << endl; 
    cout << "移动之后, list1中元素个数: "   << list1.size() << endl;

    return 0;
}