#include<iostream>
#define PI 3.1415926
using namespace std;
class Object {
	protected:
		double data;
	public:
		Object(double data) {
			this->data = data;
		}
		virtual double area() = 0;
		virtual double volume() = 0;
};
class Cube:public Object {
	public:
		Cube(double data) :Object(data) {}
		double area() {
			return data * data * 6.0;
		}
		double volume() {
			return data * data * data;
		}
};
class Circle :public Object {
	public:
		Circle(double data) :Object(data) {}
		double area() {
			return data * data * PI;
		}
		double volume() {
			return 0.0;
		}
};
class Cylinder:public Circle {
		double height;
	public:
		Cylinder(double data, double height) :Circle(data) {
			this->height = height;
		}
		double area() {
			return 2.0*Circle::area() + 2.0 * PI * data * height;
		}
		double volume() {
			return Circle::area()*height;
		}
};
int main() {
	Cube a(3);
	Circle b(6);
	Cylinder c(4, 8);
	Object *p1 = &a,*p2=&b,*p3=&c;
	cout << p1->area() << '\t' << p1->volume() << endl;
	cout << p2->area() << '\t' << p2->volume() << endl;
	cout << p3->area() << '\t' << p3->volume() << endl;
	return 0;
}
