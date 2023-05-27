#include <iostream>
#include <set>             //��������ͷ�ļ�
using namespace std;

int main()
{
    int vals[] = {24, 22, 12, 67, 22, 34};
    multiset<int> intMSet(vals, vals + 6);    //��vals����ʼ������intMSet
    multiset<int>::iterator  p;

    cout << "��ʼ��intMSet������Ϊ: ";
        //multiset<int>::iteratorΪ����multiset<int>ר�еĵ�����������˫�������
    for (p = intMSet.begin(); p != intMSet.end(); p++)
        cout << *p << "   ";
	cout << endl;

    intMSet.insert(44);    //�������в���Ԫ��44��11
    intMSet.insert(11);
    cout << "���������intMSet������Ϊ: ";
    for (p = intMSet.begin(); p != intMSet.end(); p++)
         cout << *p << "   ";
	cout << endl;

    p = intMSet.lower_bound(22);      //���ؼ����е�һ����С��22��Ԫ��
    cout << "intMSet�в�С��22����С������: " << *p <<endl;
    p = intMSet.upper_bound(22);      //���ؼ����е�һ������22��Ԫ��
    cout << "UintMSet�д���22����С������: " << *p<<endl;

    p = intMSet.find(22);    //�ҵ��򷵻���Ӧ��������δ�ҵ�����intMSet.end()
    if (p == intMSet.end())
         cout << "22����intMSet��" << endl;
    else
         cout << "intMSet��22�ĸ���Ϊ: " << intMSet.count(22) <<endl;

    intMSet.erase(22);    //ȥ��������ֵΪ22��Ԫ��
    cout << "����erase������intMSet������Ϊ: ";
    for (p = intMSet.begin(); p != intMSet.end(); p++)
          cout << *p << "   ";
	cout << endl;

    return 0;
}