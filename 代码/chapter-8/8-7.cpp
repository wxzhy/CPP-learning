#include <algorithm>
#include <iostream>
using namespace std;

struct Point
{
	int  x, y;
};

	//定义函数对象lessPointX用来比较两个点的X坐标值，小于返回true，否则返回false
struct  lessPointX
{
		//重载函数调用操作符“()”
	inline bool operator()(Point a, Point b)
	{ return (a.x < b.x);}

} structLessPointX;

	//定义函数fungreatPointY用来比较两个点的Y坐标值，大于返回true，否则返回false
bool fungreatPointY(Point a, Point b)
{ 
	return  (a.y > b.y);
}

int main()
{
	Point  pointArray[] = {{3,4}, {1,7}, {5,4}, {2,2}, {6,6}};
	int  i;

	cout<<"初始化pointArray数组为："<<endl;
	for( i = 0; i < 5; i++)
		cout<<"{"<<pointArray[i].x<<","<<pointArray[i].y<<"}"<<"\t";
	cout << endl;

		//函数对象lessPointX的实例做第3个参数
	sort(pointArray, pointArray + 5, structLessPointX);

	cout<<"按X坐标从小到大排序后的结果为："<<endl;
	for( i = 0; i < 5; i++)
		cout<<"{"<<pointArray[i].x<<","<<pointArray[i].y<<"}"<<"\t";
	cout << endl;

		//函数fungreatPointY做第3个参数
	sort(pointArray, pointArray + 5, fungreatPointY);

	cout<<"按Y坐标从大到小排序后的结果为："<<endl;
	for( i = 0; i < 5; i++)
		cout<<"{"<<pointArray[i].x<<","<<pointArray[i].y<<"}"<<"\t";
	cout << endl;

	return 0;
}