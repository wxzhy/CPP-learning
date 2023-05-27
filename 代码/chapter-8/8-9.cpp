#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

bool greaterThan60( int x )
{
   return x > 60;
} 

template <typename T>
void  outputList(int i, list<T> intList )
{
    list<T>::iterator  p;

	cout << i <<": 当前队列：";
	for (p = intList.begin(); p != intList.end(); p++)
         cout << *p << "\t";
	cout << endl;
}

	// 指向参数值为int、名称为print_elements的函数指针
int main()
{
	int arr[ ] = {10,22,32,14,52,66,37, 100}; 
	list<int> intList(arr, arr+7);     // 定义一个list并初始化
		 
	outputList(1, intList );    // 第1次输出
		 
	intList.push_back(77);   // 向list填充2个数，然后输出
	intList.push_back(88);
	outputList(2, intList );    // 第2次输出

		// 将序列中的所有22都替换为20
	replace( intList.begin(), intList.end(), 22, 20 );
	outputList(3, intList );    // 第3次输出

		// 定位到第一个大于60的数
	list< int >::iterator   location;
	location = find_if( intList.begin(), intList.end(), greaterThan60 );
   if ( location != intList.end() )	 //找到了第一个大于60的数
      cout << "    队列中第一个大于 60 的数是：" << *location << endl;
   else
      cout << "   未找到大于 60 的数！"<< endl;

	// 将序列中的所有大于60的数都替换为60
	replace_if( intList.begin(), intList.end(), greaterThan60, 60 );
	outputList(4, intList );    // 第4次输出

		// 删除list中的所有奇数
	intList.remove_if( bind2nd( modulus<int>(), 2) ); 
	outputList(5, intList );    // 第5次输出

	intList.sort();	// 排序
	outputList(6, intList );    // 第6次输出
		
	intList.reverse();	// 逆序
	outputList(7, intList );    // 第7次输出

	return 0;
}