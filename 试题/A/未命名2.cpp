#include<iostream>
#include<cstring>
using namespace std;
class MyString {

	public:
		MyString();
		MyString(const char* ch);
		MyString(const MyString& str);
		~MyString();
		int sizeString();			//字符串大小
		char* c_str();				//访问字符串 （获取当前字符串）
		bool operator == (const MyString& str);		//两个字符串相等比较
		MyString operator+ (const MyString& str);		//链接字符串。把两个字符串连接起来生											//成一个新字符串

	private:
		int size;			//字符串大小
		char* sstring;		//字符串
};

MyString::MyString() {
	size = 0;
	sstring = nullptr;
}

MyString::MyString(const char* ch) {
	if (!ch) {
		size = 0;
		sstring = nullptr;
		return;
	}
	size = strlen(ch);
	sstring = new char[size + 1];
	strcpy(sstring, ch);
}

MyString::MyString(const MyString& str) {
	if (str.size <= 0 || str.sstring == nullptr) {
		size = 0;
		sstring = nullptr;
		return;
	}
	size = str.size;
	sstring = new char[size + 1];
	strcpy(sstring, str.sstring);

}

MyString::~MyString() {
	if (sstring)
		delete[] sstring;
}

int MyString::sizeString() {
	return size;
}

char* MyString::c_str() {
	return sstring;
}

bool MyString::operator==(const MyString& str) {
	if (strcmp(sstring, str.sstring)==0)
		return true;
	else
		return false;
}

MyString MyString::operator+(const MyString& str) {
	MyString s;
	s.size = size + str.size;
	s.sstring = new char[size + 1];
	strcpy(s.sstring, sstring);
	strcat(sstring, str.sstring);
	return s;
}
int main() {
	MyString a("China"), b("Country"),c(b);
	cout << c.c_str() << endl;
	cout << (a+b).c_str() << endl;
	if(a == b) {
		cout << "a == b" << " " << endl;
	} else {
		cout << "a != b" << " " << endl;
	}
	return 0;
}