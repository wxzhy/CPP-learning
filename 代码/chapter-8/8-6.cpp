#include <iostream>
#include <deque>
using namespace std;

int main()
{
    double  vals[] = {1, 2, 3, 4, 5, 6}; 
	unsigned int  i;

        //构造一个双端队列dDeque，用迭代器vals至vals + 6之间元素进行初始化
    deque<double>  dDeque(vals, vals + 6);

    cout << "dDeque中初始元素: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl;

    dDeque.assign(2, 1.5);     //将元素1.5拷贝2份加入到容器中
    cout << "执行函数assign后, dDeque的内容: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl; 

    dDeque.at(0) = 2.4;       //向量的第一个元素赋值为2.4
    cout << "执行函数at后, dDeque的内容: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl;   

    //先后在下标为1的位置插入元素22和33
    dDeque.insert(dDeque.begin() + 1, 22);
    dDeque.insert(dDeque.begin() + 1, 33);                         
    cout << "执行插入操作后, dDeque的内容: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl;

    dDeque.erase(dDeque.begin() + 2, dDeque.begin() + 4);     //将下标在区间[2,4)内的元素删除
    cout << "执行删除指定区间元素后, dDeque的内容: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl;

    dDeque.clear();       //将容器清空
    cout << "执行 clear 操作后, dDeque中元素个数为:" << dDeque.size() << endl;
    cout << "是否为空? " <<(dDeque.empty() ? "Yes" : "No") << endl;

         //将元素1.1、2.5和3.8插入到队首
    dDeque.push_front(1.1);                                                        
    dDeque.push_front(2.5);                                                        
    dDeque.push_front(3.8);                                                        
    cout << "执行插入操作后, dDeque的内容: ";
    for ( i = 0; i < dDeque.size(); i++)                            
        cout << dDeque[i] << "   ";
	cout << endl;

    dDeque.pop_front();         //删除队首元素
    dDeque.pop_back();         //删除队尾元素
    cout << "执行删除操作后, dDeque的内容: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl;

    return 0;
}