#include<iostream>
using namespace std;
class  Complex {
		double real, imag;
	public:
		Complex(double r = 0.0, double i = 0.0) {
			real = r;
			imag = i;
		}
		Complex(const Complex& c) {
			real = c.real;
			imag = c.imag;
		}
		void Print() {
			cout << real << '+' << imag << 'i' << endl;
		}
		Complex operator+(Complex &c) {
			return Complex(real + c.real, imag + c.imag);
		}
		Complex operator-(Complex &c) {
			return Complex(real - c.real, imag - c.imag);
		}
};
int main() {
	Complex a(1, 2.3), b(2, 4.4),c(b);
	(a - b).Print();
	(a + b).Print();
	c.Print();
	return 0;
}
