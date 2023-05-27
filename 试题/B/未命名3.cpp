#include<iostream>
using namespace std;
typedef class RMB {
		int y, j, f;
	public:
		RMB(int y = 0, int j = 0, int f = 0) {
			this->y = y;
			this->j = j;
			this->f = f;
		}
		RMB(const RMB& in) {
			y = in.y;
			j = in.j;
			f = in.f;
		}
		void set(int y, int j, int f) {
			this->y = y;
			this->j = j;
			this->f = f;
		}
		friend RMB operator+(RMB& in1, RMB& in2) {
			int y = in1.y + in2.y, j = in1.j + in2.j, f = in1.f + in2.f;
			if (f >= 10) {
				f -= 10;
				j++;
			}
			if (j >= 10) {
				j -= 10;
				y++;
			}
			return RMB(y, j, f);
		}
} Money;
int main() {
	RMB m1(10, 1, 3);
	Money m2(2, 4, 8);
	RMB m3 = m1 + m2;
	return 0;
}