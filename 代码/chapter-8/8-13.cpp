#include <iostream>
#include <queue>	// queue 容器适配器的头文件
using namespace std;

int main()
{
    queue< int> quVals;		//  int 类型的队列对象
    
        //将10个数入队列
    for (int i = 0; i < 10; i++)
    {
		quVals.push( i * 10 );
	}

    cout << "出队: ";
    while ( !quVals.empty() ) 
    {
        cout << quVals.front() << "   ";		// 弹出队列中的首元素
        quVals.pop();		// 移除元素
    } 
    cout << endl;

    return 0;
}