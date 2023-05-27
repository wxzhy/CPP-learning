#include<iostream>
#include<cstring>
using namespace std;
class MyString {
	public:
		MyString(const char* s); //构造字符串，使count加一
		MyString(const MyString& str);//构造字符串，使count加一
		~MyString();//析构字符串，使count减一
		char* c_str(); //访问字符串（获取当前字符串指针）
		bool operator==(const MyString& str); //两个字符串相等比较
		char& operator[](int i); //下标访问第i个字符
		static void printCount(); //打印count的值
	private:
		char* sstring; //用于记录字符串内容，需要分配内存
		static int count;//用于记录字符串对象的个数，初始值为0
};

int MyString::count = 0;
MyString::MyString(const char* s) {
	if(!s) {
		sstring=nullptr;
	} else {
		sstring = new char[strlen(s) + 1];
		strcpy(sstring, s);
	}
	count++;
}

MyString::MyString(const MyString& str) {
	if(!str.sstring) {
		sstring=nullptr;
	} else {
		sstring = new char[strlen(str.sstring) + 1];
		strcpy(sstring, str.sstring);
	}
	count++;
}

MyString::~MyString() {
	if (sstring)
		delete[] sstring;
	count--;
}

char* MyString::c_str() {
	return sstring;
}

bool MyString::operator==(const MyString& str) {
	if (strcmp(sstring, str.sstring) == 0)
		return true;
	else
		return false;
}

char& MyString::operator[](int i) {
	return sstring[i];
}

void MyString::printCount() {
	cout << count << endl;
}
int main() {
	system("chcp 65001>nul");
	MyString a("China"), b(a);
	cout << a.c_str() << endl;
	cout << b.c_str() << endl;
	cout << (a == b) << endl;
	cout << a[1] << ' ' << a[2] << endl;
	a.printCount();
	return 0;
}