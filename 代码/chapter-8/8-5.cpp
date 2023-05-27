#include <iostream>
#include <list>
using namespace std;

int main()
{
    int vals[] = {10, 20, 30, 40, 50 };

        //����һ���б�intList������vals��vals + 4֮��Ԫ�س�ʼ��
    list<int>  intList(vals, vals + 4);

    cout << "intList�еĳ�ʼԪ��: ";
    list<int>::iterator  p;
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl << endl; 

    intList.assign(2, 11);     //��Ԫ��11����2�ݼ��뵽������
    cout << "ִ��assign��intList������: ";
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    list<int>::iterator  itr = intList.begin();
    itr++;    
    //����Ԫ��55
    intList.insert(itr, 55);                         
    cout << "ִ��insert��intList������: ";
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    list<int>::iterator beg = intList.begin();
    itr++;
    intList.erase(beg, itr);      //��beg��itr֮���Ԫ��ɾ��
    cout << "ִ��erase��, intList�е�����: ";
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    intList.clear();      //�������
    cout << "ִ��clear��, intList�е�Ԫ�ظ���: " << intList.size() << endl;
    cout << "�Ƿ�Ϊ��? " << (intList.empty() ? "Yes" : "No")<< endl;    //�ж��Ƿ��

         //��Ԫ��10��20���뵽�б�ͷ
    intList.push_front(10);                                        
    intList.push_front(20);                                        
    cout << "ִ�в��������, intList�е�����: ";
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    intList.pop_front();    //ɾ���б�ͷԪ��
    intList.pop_back();     //ɾ����βԪ��
    cout << "ִ��ɾ��������, intList�е�����: ";
    for (p = intList.begin(); p != intList.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    int   val1[] = {7, 3, 1, 2};
    list<int>   list1(val1, val1 + 4);
    list1.sort();       //���б���������
    cout << "���������к�, list1: ";
    for (p = list1.begin(); p != list1.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    list<int> list2(list1);
    list1.merge(list2);      //���б�list1��list2�ϲ���list2��Ϊ��
    cout << "�ϲ���, list1: ";
    for (p = list1.begin(); p != list1.end(); p++)
        cout << *p << "   ";
	cout << endl ; 
    cout << "list2Ԫ�ظ���Ϊ: " << list2.size() << endl ;

    list1.reverse();      //��list1��ת
    cout << "��list1��ת, list1: ";
    for (p = list1.begin(); p != list1.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

	   //���б�β������Ԫ��100
    list1.push_back(100);                                                
    cout << "��list1��β����Ԫ��, list1: ";
    for (p = list1.begin(); p != list1.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    list1.remove(7);     //���б���ֵΪ7��ɾ��
    cout << "ɾ��ֵΪ7��Ԫ��, list1: ";
    for (p = list1.begin(); p != list1.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    list2.assign(3, 2);    //��Ԫ��2����3�ݼ��뵽�б�list2��
    cout << "ִ��assign��, list2: ";
    for (p = list2.begin(); p != list2.end(); p++)
        cout << *p << "   ";
	cout << endl ; 

    p = list2.begin();
    p++;
    list2.splice(p, list1);   //��list1��Ԫ���Ƶ�list2��Ԫ��֮ǰ��list1��Ϊ��
    cout << "���б�list1��Ԫ���Ƶ�list2, list2��Ϊ: ";
    for (p = list2.begin(); p != list2.end(); p++)
        cout << *p << "   ";
	cout << endl; 
    cout << "�ƶ�֮��, list1��Ԫ�ظ���: "   << list1.size() << endl;

    return 0;
}