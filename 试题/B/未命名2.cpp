#include<iostream>
#include<cstring>
using namespace std;
class CharArray {
		char* data_list;	//指针
		int len; 			//数组长度
	public:
		CharArray(int size);//构造函数，输入数组大小
		CharArray(CharArray& in);//拷贝构造函数
		~CharArray();//析构函数
		void Set(int pos, int val);//在pos位置放入val
		char Get(int pos); //返回位于pos位置的元素
		int Size() {
			return len;    //返回数组大小
		}
};

CharArray::CharArray(int size) {
	data_list = new char[size];
	len = size;
}

CharArray::CharArray(CharArray& in) {
	if (in.len <= 0 || in.data_list == nullptr) {
		len = 0;
		data_list = nullptr;
	}
	data_list = new char[in.len];
	strcpy(data_list, in.data_list);
}

CharArray::~CharArray() {
	if (data_list)
		delete[] data_list;
}

void CharArray::Set(int pos, int val) {
	if (pos<0||pos >= len)
		return;
	else
		data_list[pos] = val;
}

char CharArray::Get(int pos) {
	return data_list[pos];
}
int main() {
	CharArray a(5);
	for (int i = 0; i < 5; i++)
		a.Set(i, 'a' + i);
	CharArray b(a);
	for (int i = 0; i < 5; i++)
		cout<<a.Get(i);
	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << b.Get(i);
	return 0;
}