#include <iostream>
#include <queue>	// queue ������������ͷ�ļ�
using namespace std;

int main()
{
    queue< int> quVals;		//  int ���͵Ķ��ж���
    
        //��10���������
    for (int i = 0; i < 10; i++)
    {
		quVals.push( i * 10 );
	}

    cout << "����: ";
    while ( !quVals.empty() ) 
    {
        cout << quVals.front() << "   ";		// ���������е���Ԫ��
        quVals.pop();		// �Ƴ�Ԫ��
    } 
    cout << endl;

    return 0;
}