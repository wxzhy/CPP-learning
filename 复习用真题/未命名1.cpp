#include<iostream>
#include<fstream>
#define MAX 1000
using namespace std;
int main() {
	system("chcp 65001>nul");
	ifstream in("a.txt");
	ofstream out("b.txt");
	if (in.fail() || out.fail()) {
		cout << "打开失败";
		exit(0);
	}
	char s[MAX];
	int count = 1;
	while (!in.eof()) {
		in.getline(s,MAX);
		for (int i = 0; s[i]!='\0'; i++)
			s[i] = toupper(s[i]);
		out << count << ' ' << s << endl;
		count++;
	}
	in.close();
	out.close();
	cout << "成功" << endl;
	return 0;
}