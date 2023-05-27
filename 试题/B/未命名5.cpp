#include<iostream>
#include<cstring>
using namespace std;
class Variable {
		int size; 	//变量占据的字节数
	public:
		Variable(int s) :size(s) {}
		Variable(const Variable& in) :size(in.size) {}
		virtual int Calculate() = 0;
		int GetSize() {
			return size;
		}
};
class IntVariable :public Variable {
		int val;
	public:
		IntVariable(int i) :Variable(sizeof(int)) {
			val = i;
		}
		IntVariable(const IntVariable& in) :Variable(in) {
			val = in.val;
		}
		~IntVariable() {}
		int Calculate() {
			return GetSize();
		}
};
class StringVariable :public Variable {
		char* ptr;
	public:
		StringVariable(const char *s) :Variable(strlen(s)+1) {
			ptr = new char[GetSize()];
			strcpy(ptr, s);
		}
		StringVariable(const StringVariable& in) :Variable(in) {
			ptr = new char[GetSize()];
			strcpy(ptr, in.ptr);
		}
		~StringVariable() {
			if (ptr)
				delete[] ptr;
		}
		int Calculate() {
			return GetSize();
		}
};
int main() {
	IntVariable i(10);
	StringVariable s("HelloNUAA");
	Variable* p1 = &i, * p2 = &s;
	cout << p1->Calculate() << endl;
	cout << p2->Calculate() << endl;
	return 0;
}

