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

	cout << i <<": ��ǰ���У�";
	for (p = intList.begin(); p != intList.end(); p++)
         cout << *p << "\t";
	cout << endl;
}

	// ָ�����ֵΪint������Ϊprint_elements�ĺ���ָ��
int main()
{
	int arr[ ] = {10,22,32,14,52,66,37, 100}; 
	list<int> intList(arr, arr+7);     // ����һ��list����ʼ��
		 
	outputList(1, intList );    // ��1�����
		 
	intList.push_back(77);   // ��list���2������Ȼ�����
	intList.push_back(88);
	outputList(2, intList );    // ��2�����

		// �������е�����22���滻Ϊ20
	replace( intList.begin(), intList.end(), 22, 20 );
	outputList(3, intList );    // ��3�����

		// ��λ����һ������60����
	list< int >::iterator   location;
	location = find_if( intList.begin(), intList.end(), greaterThan60 );
   if ( location != intList.end() )	 //�ҵ��˵�һ������60����
      cout << "    �����е�һ������ 60 �����ǣ�" << *location << endl;
   else
      cout << "   δ�ҵ����� 60 ������"<< endl;

	// �������е����д���60�������滻Ϊ60
	replace_if( intList.begin(), intList.end(), greaterThan60, 60 );
	outputList(4, intList );    // ��4�����

		// ɾ��list�е���������
	intList.remove_if( bind2nd( modulus<int>(), 2) ); 
	outputList(5, intList );    // ��5�����

	intList.sort();	// ����
	outputList(6, intList );    // ��6�����
		
	intList.reverse();	// ����
	outputList(7, intList );    // ��7�����

	return 0;
}