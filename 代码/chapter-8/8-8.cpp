#include <functional>
#include <iostream>
using namespace std;

int main()
{
	int v1=8, v2=6;
	plus<int> intAdd;
	int sum=intAdd(v1,v2);		 //��Ч��:sum=v1+inval2
	cout <<"�ͣ�"<< sum <<endl;

	multiplies<int> intMul;
	int mul = intMul(v1,v2);	  //��Ч��:mul=v1*inval2	
	cout <<"�˻���"<< mul <<endl;

	logical_and <int> intLA;
	bool la = intLA(v1,v2);		//��Ч��:le=v1 && inval2	
	cout << "�߼��룺"<<la <<endl;

	less_equal <int> intLE;
	bool le = intLE(v1,v2);		//��Ч��:le=v1 <= inval2	
	cout << "С�ڵ��ڣ�"<<le <<endl;

	return 0;
}