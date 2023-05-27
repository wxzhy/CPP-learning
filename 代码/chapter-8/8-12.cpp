#include <iostream>
#include <stack>
#include <vector>
using namespace std;

    //�����ɾ��ջ������Ԫ��
template<typename T>
void printEraseStack(T  &stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << "   ";
        stack.pop();  //ջ��Ԫ�س�ջ
    }
	cout << endl;
}

int main()
{
    stack<int> stack1;     //ʹ��Ĭ�Ϲ��캯������һ��ջstack1
    stack<int, vector<int> > stack2;//ʹ��vector����һ��ջstack2

        //��10����ѹ�뵽stack1��stack2ջ��
    for (int i = 0; i < 10; i++)
    {
        stack1.push(i+10);    //Ԫ����ջ
        stack2.push(i*10);
    }

    cout << "stack1������Ϊ: ";
    printEraseStack(stack1);

    cout << "stack2������Ϊ: ";
    printEraseStack(stack2);
    
    return 0;
}