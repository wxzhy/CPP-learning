#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int value, *presult, a[] = {33, 26, 16, 37, 3, 88};

	cout<<"请输入要查找的值：";
	cin>>value;
	
	presult = find(a, a + 6, value);
	if(presult == a + 6)
		cout<<value<<"不存在！"<<endl;
	else
		cout<< value<<"存在，下标是："<< presult - a <<endl;

	return 0;
}
