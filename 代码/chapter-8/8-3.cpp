#include <iostream>
#include <vector>
using namespace std;	

int main()
{
    double values[] = {1, 2, 3, 4, 5, 6, 7};  
    int  i;

        //����һ����ΪdVector��������values, values + 7�ֱ�ָ�������һ�������һ��Ԫ��
    vector<double> dVector(values, values + 7);   

    cout << "1. dVector�еĳ�ʼ����: ";
    for ( i = 0; i < dVector.size(); i++)
        cout << dVector[i] << "\t";
	cout << endl;

    dVector.assign(4, 1.8);                      //��1.8����4��

    cout << "2. ִ��assign������dVector������: ";
    for (i = 0; i < dVector.size(); i++)
        cout << dVector[i] << "\t";
	cout << endl;

    dVector.at(0) = 64.4;                         //��ֵ�����ĵ�һ��Ԫ��Ϊ64.4
    cout << "3. ִ��at������dVector������: ";
    for (i = 0; i < dVector.size(); i++)
        cout << dVector[i] << "\t";
	cout << endl;

    vector<double>::iterator  itr = dVector.begin();    //����Ԫ�صĵ�������ֵ��itr
        //��Ԫ��55��66�����β��뵽��Ԫ�غ�ĵ�һ��λ��
    dVector.insert(itr + 1, 55);                  
    dVector.insert(itr + 1, 66);  

    cout << "4. ִ��insert������dVector������: ";
    for (i = 0; i < dVector.size(); i++)
        cout << dVector[i] << "\t";
	cout << endl;

    dVector.erase(itr + 2, itr + 4);               //��itr+2��itr+4֮���2��Ԫ��ɾ��
    cout << "5. ִ��erase������dVector����: ";
    for (i = 0; i < dVector.size(); i++)
        cout << dVector[i] << "\t";
	cout << endl;

    dVector.clear();                               //���������

    cout << "6. ִ��clear������dVector��Ԫ�ظ���Ϊ:" << dVector.size() << endl;
    cout << "7. dVector�Ƿ�Ϊ��? " << (dVector.empty() ? "Yes" : "No") << endl;    //�ж������Ƿ��

    return 0;
}
