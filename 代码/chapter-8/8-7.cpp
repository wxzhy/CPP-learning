#include <algorithm>
#include <iostream>
using namespace std;

struct Point
{
	int  x, y;
};

	//���庯������lessPointX�����Ƚ��������X����ֵ��С�ڷ���true�����򷵻�false
struct  lessPointX
{
		//���غ������ò�������()��
	inline bool operator()(Point a, Point b)
	{ return (a.x < b.x);}

} structLessPointX;

	//���庯��fungreatPointY�����Ƚ��������Y����ֵ�����ڷ���true�����򷵻�false
bool fungreatPointY(Point a, Point b)
{ 
	return  (a.y > b.y);
}

int main()
{
	Point  pointArray[] = {{3,4}, {1,7}, {5,4}, {2,2}, {6,6}};
	int  i;

	cout<<"��ʼ��pointArray����Ϊ��"<<endl;
	for( i = 0; i < 5; i++)
		cout<<"{"<<pointArray[i].x<<","<<pointArray[i].y<<"}"<<"\t";
	cout << endl;

		//��������lessPointX��ʵ������3������
	sort(pointArray, pointArray + 5, structLessPointX);

	cout<<"��X�����С���������Ľ��Ϊ��"<<endl;
	for( i = 0; i < 5; i++)
		cout<<"{"<<pointArray[i].x<<","<<pointArray[i].y<<"}"<<"\t";
	cout << endl;

		//����fungreatPointY����3������
	sort(pointArray, pointArray + 5, fungreatPointY);

	cout<<"��Y����Ӵ�С�����Ľ��Ϊ��"<<endl;
	for( i = 0; i < 5; i++)
		cout<<"{"<<pointArray[i].x<<","<<pointArray[i].y<<"}"<<"\t";
	cout << endl;

	return 0;
}