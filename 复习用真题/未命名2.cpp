#include<iostream>
using namespace std;
class IntArray {
		int* data;	//指针
		int len; 			//数组长度
	public:
		IntArray(int size);//构造函数，输入数组大小
		IntArray(IntArray& in);//拷贝构造函数
		~IntArray();//析构函数
		void Set(int index, int val); //给位置index赋值为val
		int Size() {
			return len;    //返回数组大小
		}
};

IntArray::IntArray(int size) {
	if (size <= 0) {
		data = nullptr;
		len = 0;
		return;
	}
	data = new int[size];
	len = size;
	for (int i = 0; i < size; ++i)
		data[i] = 0;
}

IntArray::IntArray(IntArray& in) {
	if (in.len < 0||data==nullptr) {
		data = nullptr;
		len = 0;
		return;
	}
	len = in.len;
	data = new int[len];
	for (int i = 0; i < len; i++)
		data[i] = in.data[i];
}

IntArray::~IntArray() {
	if (data)
		delete[] data;
}

void IntArray::Set(int index, int val) {
	if (index >= len||index < 0)
		return;
	else
		data[index] = val;
}
int main() {
	IntArray a(4);
	for(int i=0; i<4; ++i)
		a.Set(i,'c'+i);
	IntArray b(a);
	return 0;
}