#include <iostream>
#include <deque>
using namespace std;

int main()
{
    double  vals[] = {1, 2, 3, 4, 5, 6}; 
	unsigned int  i;

        //����һ��˫�˶���dDeque���õ�����vals��vals + 6֮��Ԫ�ؽ��г�ʼ��
    deque<double>  dDeque(vals, vals + 6);

    cout << "dDeque�г�ʼԪ��: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl;

    dDeque.assign(2, 1.5);     //��Ԫ��1.5����2�ݼ��뵽������
    cout << "ִ�к���assign��, dDeque������: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl; 

    dDeque.at(0) = 2.4;       //�����ĵ�һ��Ԫ�ظ�ֵΪ2.4
    cout << "ִ�к���at��, dDeque������: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl;   

    //�Ⱥ����±�Ϊ1��λ�ò���Ԫ��22��33
    dDeque.insert(dDeque.begin() + 1, 22);
    dDeque.insert(dDeque.begin() + 1, 33);                         
    cout << "ִ�в��������, dDeque������: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl;

    dDeque.erase(dDeque.begin() + 2, dDeque.begin() + 4);     //���±�������[2,4)�ڵ�Ԫ��ɾ��
    cout << "ִ��ɾ��ָ������Ԫ�غ�, dDeque������: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl;

    dDeque.clear();       //���������
    cout << "ִ�� clear ������, dDeque��Ԫ�ظ���Ϊ:" << dDeque.size() << endl;
    cout << "�Ƿ�Ϊ��? " <<(dDeque.empty() ? "Yes" : "No") << endl;

         //��Ԫ��1.1��2.5��3.8���뵽����
    dDeque.push_front(1.1);                                                        
    dDeque.push_front(2.5);                                                        
    dDeque.push_front(3.8);                                                        
    cout << "ִ�в��������, dDeque������: ";
    for ( i = 0; i < dDeque.size(); i++)                            
        cout << dDeque[i] << "   ";
	cout << endl;

    dDeque.pop_front();         //ɾ������Ԫ��
    dDeque.pop_back();         //ɾ����βԪ��
    cout << "ִ��ɾ��������, dDeque������: ";
    for ( i = 0; i < dDeque.size(); i++)
        cout << dDeque[i] << "   ";
	cout << endl;

    return 0;
}