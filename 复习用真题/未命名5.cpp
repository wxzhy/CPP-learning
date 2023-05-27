#include<iostream>
using namespace std;
class shape {
	public:
		virtual float Area() = 0;
};
class rectangle :public shape {
		float length, width;
	public:
		rectangle(float l=0.0, float w=0.0) {
			length = l;
			width = w;
		}
		float Area() {
			return length*width;
		}
};
class square :public shape {
		float length;
	public:
		square(float l=0.0) {
			length = l;
		}
		float Area() {
			return length * length;
		}
};
int main() {
	rectangle a(2, 4);
	square b(5);
	shape* p1 = &a, * p2 = &b;
	cout << p1->Area() << endl;
	cout << p2->Area() << endl;
	return 0;
}
