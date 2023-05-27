#include<iostream>
#include<fstream>
#define MAX 1000
using namespace std;
int main() {
    system("chcp 65001>nul");
	ifstream in("1.txt");
	ofstream out("2.txt");
	if (in.fail() || out.fail()) {
		cout << "打开失败" << endl;
		exit(0);
	}
	int line = 0;
	while (!in.eof())
	{
		line++;
    	char s[MAX];
		in.getline(s, MAX);
		if (line % 2 == 0)
			out << line << ' ' << s << endl;
	}
	cout << "成功" << endl;
	in.close();
	out.close();
	return 0;
}