#include<iostream>
#include<fstream>
using namespace std;
int main() {
	system("chcp 65001>nul");
	ifstream in("num.txt");
	ofstream out("output.txt");
	if (in.fail() || out.fail()) {
		cout << "打开失败" << endl;
		exit(0);
	}
	int i, sum=0, count=0;
	while (!in.eof()) {
		in >> i;
		switch (i) {
			case 0: {
					out << "SUM: " << sum << endl;
					sum = 0;
					count = 0;
					break;
				}
			case 1: {
					out << "AVG: " << (double)sum / count << endl;
					sum = 0;
					count = 0;
					break;
				}
			default: {
					sum += i;
					count++;
				}
		}
	}
	in.close();
	out.close();
	cout << "成功" << endl;
	return 0;
}