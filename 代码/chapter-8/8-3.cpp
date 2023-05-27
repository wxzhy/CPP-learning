#include <iostream>
#include <vector>
using namespace std;	

int main()
{
    double values[] = {1, 2, 3, 4, 5, 6, 7};  
    int  i;

        //构造一个名为dVector的向量，values, values + 7分别指向数组第一个和最后一个元素
    vector<double> dVector(values, values + 7);   

    cout << "1. dVector中的初始内容: ";
    for ( i = 0; i < dVector.size(); i++)
        cout << dVector[i] << "\t";
	cout << endl;

    dVector.assign(4, 1.8);                      //将1.8拷贝4份

    cout << "2. 执行assign函数后，dVector内容是: ";
    for (i = 0; i < dVector.size(); i++)
        cout << dVector[i] << "\t";
	cout << endl;

    dVector.at(0) = 64.4;                         //赋值向量的第一个元素为64.4
    cout << "3. 执行at函数后，dVector内容是: ";
    for (i = 0; i < dVector.size(); i++)
        cout << dVector[i] << "\t";
	cout << endl;

    vector<double>::iterator  itr = dVector.begin();    //将首元素的迭代器赋值给itr
        //将元素55和66，依次插入到首元素后的第一个位置
    dVector.insert(itr + 1, 55);                  
    dVector.insert(itr + 1, 66);  

    cout << "4. 执行insert函数后，dVector内容是: ";
    for (i = 0; i < dVector.size(); i++)
        cout << dVector[i] << "\t";
	cout << endl;

    dVector.erase(itr + 2, itr + 4);               //将itr+2到itr+4之间的2个元素删除
    cout << "5. 执行erase函数后，dVector内容: ";
    for (i = 0; i < dVector.size(); i++)
        cout << dVector[i] << "\t";
	cout << endl;

    dVector.clear();                               //将容器清空

    cout << "6. 执行clear函数后，dVector中元素个数为:" << dVector.size() << endl;
    cout << "7. dVector是否为空? " << (dVector.empty() ? "Yes" : "No") << endl;    //判断容器是否空

    return 0;
}
