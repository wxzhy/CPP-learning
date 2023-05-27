#include <iostream>
#include <queue>
#include <deque>
using namespace std;

     //输出并删除优先级队列中所有元素
template<typename T>
void printEraseQueue(T &priority_queue)
{
    while (!priority_queue.empty())
    {
        cout << priority_queue.top() << "   ";
        priority_queue.pop();	//优先级最高的元素出队
    }
	cout << endl;
}

int main()
{
    priority_queue<int>    priQue1;    //使用默认构造函数创建一个优先级队列
    priority_queue<int, deque<int> >    priQue2;	//使用deque创建一个优先级队列

          //将10个数插入到priQue1和priQue2中
    for (int i = 0; i < 10; i++)
    {
        priQue1.push(i*10);	//元素i入优先级队列
        priQue2.push(i+10);
    }

    cout << "priQue1的内容为: ";
    printEraseQueue(priQue1);

    cout << "priQue2的内容为: ";
    printEraseQueue(priQue2);

    return 0;
}