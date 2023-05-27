#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
class Book {
		char name[12];
		int id;
		float price;
		static int num;
	public:
		Book(const char name[], int id, float price) {
			strcpy(this->name, name);
			this->id = id;
			this->price = price;
			num++;
		}
		Book(const Book& b) {
			strcpy(name, b.name);
			id = b.id;
			price = b.price;
			num++;
		}
		char *getName() {
			return name;
		}
		int getPrice() {
			return price;
		}
		static int getNum() {
			return num;
		}
};
int Book::num = 0;
int main() {
    system("chcp 65001>nul");
	Book b[3] = { Book("C++", 1, 45.2), Book("C", 2, 40.0), Book("Math", 3, 50.0) };
	cout << b[0].getName() << '\t' << b[0].getPrice() << endl;
	cout << b[1].getName() << '\t' << b[1].getPrice() << endl;
	cout << b[2].getName() << '\t' << b[2].getPrice() << endl;
	cout << "共有" << b[0].getNum() << "本" << endl;
	return 0;
}