#include <iostream>
#include <stack>
#include <vector>
using namespace std;

    //输出并删除栈中所有元素
template<typename T>
void printEraseStack(T  &stack)
{
    while (!stack.empty())
    {
        cout << stack.top() << "   ";
        stack.pop();  //栈顶元素出栈
    }
	cout << endl;
}

int main()
{
    stack<int> stack1;     //使用默认构造函数创建一个栈stack1
    stack<int, vector<int> > stack2;//使用vector创建一个栈stack2

        //将10个数压入到stack1和stack2栈中
    for (int i = 0; i < 10; i++)
    {
        stack1.push(i+10);    //元素入栈
        stack2.push(i*10);
    }

    cout << "stack1的内容为: ";
    printEraseStack(stack1);

    cout << "stack2的内容为: ";
    printEraseStack(stack2);
    
    return 0;
}