#include <functional>
#include <iostream>
using namespace std;

int main()
{
	int v1=8, v2=6;
	plus<int> intAdd;
	int sum=intAdd(v1,v2);		 //等效于:sum=v1+inval2
	cout <<"和："<< sum <<endl;

	multiplies<int> intMul;
	int mul = intMul(v1,v2);	  //等效于:mul=v1*inval2	
	cout <<"乘积："<< mul <<endl;

	logical_and <int> intLA;
	bool la = intLA(v1,v2);		//等效于:le=v1 && inval2	
	cout << "逻辑与："<<la <<endl;

	less_equal <int> intLE;
	bool le = intLE(v1,v2);		//等效于:le=v1 <= inval2	
	cout << "小于等于："<<le <<endl;

	return 0;
}