#include <iostream>
#include <queue>
#include <deque>
using namespace std;

     //�����ɾ�����ȼ�����������Ԫ��
template<typename T>
void printEraseQueue(T &priority_queue)
{
    while (!priority_queue.empty())
    {
        cout << priority_queue.top() << "   ";
        priority_queue.pop();	//���ȼ���ߵ�Ԫ�س���
    }
	cout << endl;
}

int main()
{
    priority_queue<int>    priQue1;    //ʹ��Ĭ�Ϲ��캯������һ�����ȼ�����
    priority_queue<int, deque<int> >    priQue2;	//ʹ��deque����һ�����ȼ�����

          //��10�������뵽priQue1��priQue2��
    for (int i = 0; i < 10; i++)
    {
        priQue1.push(i*10);	//Ԫ��i�����ȼ�����
        priQue2.push(i+10);
    }

    cout << "priQue1������Ϊ: ";
    printEraseQueue(priQue1);

    cout << "priQue2������Ϊ: ";
    printEraseQueue(priQue2);

    return 0;
}