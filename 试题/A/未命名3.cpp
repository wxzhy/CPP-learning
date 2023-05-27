#include<iostream>
#include<cstring>
#define PI 3.1415926
using namespace std;
class Body {
	protected:
		double data;
	public:
		Body(double data) {
			this->data = data;
		}
		virtual double surface_area() = 0;
		virtual double volume() = 0;
};
class Sphere :public Body {
	public:
		Sphere(double data):Body(data) {}
		double surface_area() {
			return 4.0 * PI * data * data;
		}
		double volume() {
			return 4.0 * PI * data * data * data / 3.0;
		}
};
class Cube :public Body {
	public:
		Cube(double data):Body(data) {}
		double surface_area() {
			return 6.0 * data * data;
		}
		double volume() {
			return data * data * data;
		}
};
class Cylinder :public Body {
		double height;
	public:
		Cylinder(double data, double height) :Body(data) {
			this->height = height;
		}
		double surface_area() {
			return 2.0 * PI * data * height + 2.0 * PI * data * data;
		}
		double volume() {
			return PI * data * data * height;
		}
};
int main() {
	Sphere a(2);
	Cube b(4);
	Cylinder c(3, 6);
	Body* b1 = &a, * b2 = &b, * b3 = &c;
	cout << b1->surface_area() << '\t' << b1->volume() << endl;
	cout << b2->surface_area() << '\t' << b2->volume() << endl;
	cout << b3->surface_area() << '\t' << b3->volume() << endl;
	return 0;
}