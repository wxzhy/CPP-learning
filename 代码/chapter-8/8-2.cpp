#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int value, *presult, a[] = {33, 26, 16, 37, 3, 88};

	cout<<"������Ҫ���ҵ�ֵ��";
	cin>>value;
	
	presult = find(a, a + 6, value);
	if(presult == a + 6)
		cout<<value<<"�����ڣ�"<<endl;
	else
		cout<< value<<"���ڣ��±��ǣ�"<< presult - a <<endl;

	return 0;
}
