#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef    map<int, string, less<int> >        MAP_INT_STRING; 
    //����������ȡ��ΪMAP_INT_STRING�����ϰ���������

int main()
{
    MAP_INT_STRING   mapIStr;

           //��mapIStr����4��Ԫ��,ע��insert�����Ĳ�������ΪMAP_INT_STRING::value_type
    mapIStr.insert(MAP_INT_STRING::value_type(1800, "����")); 
    mapIStr.insert(MAP_INT_STRING::value_type(1801, "����"));
    mapIStr.insert(MAP_INT_STRING::value_type(1802, "����"));
    mapIStr.insert(MAP_INT_STRING::value_type(1803, "����"));

    cout << "1.��ʼ��mapIStr������Ϊ:";
    MAP_INT_STRING::iterator  p;
       // MAP_INT_STRING::iteratorΪ����MAP_INT_STRINGר�еĵ�����������˫�������
    for (p = mapIStr.begin(); p != mapIStr.end(); p++)
        cout << "(" << p->first << ", " << p->second << ")" << "   ";
	cout << endl;

    cout << "2.��mapIStr�в��ҹؼ���Ϊ1802��Ԫ��: ";
    p = mapIStr.find(1802);
    if (p == mapIStr.end())
        cout << "mapIStr��û�йؼ���Ϊ1802��Ԫ��";
    else
        cout << "(" << p->first << ", " << p->second << ")" << endl;

    mapIStr.erase(1803);    //ȥ��������ֵ�ؼ���Ϊ1803��Ԫ��
        cout << "3.����erase������mapIStr������Ϊ: ";
    for (p = mapIStr.begin(); p != mapIStr.end(); p++)
        cout << "(" << p->first << ", " << p->second << ")" << "   ";
	cout << endl;

    return 0;
}