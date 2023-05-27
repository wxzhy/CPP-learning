#include<iostream>
#include<cstring>
using namespace std;
class Employee {
		char name[12];
		int id;
		float salary;
		static int num;
	public:
		Employee(const char name[], int id, float salary) {
			strcpy(this->name, name);
			this->id = id;
			this->salary = salary;
			num++;
		}
		Employee(const Employee& e) {
			strcpy(name, e.name);
			id = e.id;
			salary = e.salary;
			num++;
		}
		static int getNum() {
			return num;
		}
		char* getName() {
			return name;
		}
		int getId() {
			return id;
		}
		float getSalary() {
			return salary;
		}
};
int Employee::num = 0;
int main() {
	Employee e1("Tommy", 1, 2000);
	Employee e2("Bobby", 2, 3000);
	Employee e3("Mike", 3, 2300);
	Employee e4(e3);
	double salary = (e1.getSalary() + e2.getSalary() + e3.getSalary() + e4.getSalary()) / e1.getNum();
	cout << e1.getName() << "\t" << e1.getSalary() << endl;
	cout << e2.getName() << "\t" << e2.getSalary() << endl;
	cout << e3.getName() << "\t" << e3.getSalary() << endl;
	cout << e4.getName() << "\t" << e4.getSalary() << endl;
	cout << "Average:" << salary << endl;
	return 0;
}