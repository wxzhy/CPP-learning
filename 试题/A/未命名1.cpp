#include<iostream>
#include<fstream>
#define MAX 1000
using namespace std;
int main() {
	system("chcp 65001>nul");
	ifstream in("File.txt");
	ofstream out("TextFile.txt");
	if (in.fail() || out.fail()) {
		cout << "打开失败" << endl;
		exit(0);
	}
	while (!in.eof()) {
		char s[MAX];
		in.getline(s, MAX);
		for (int i = 0; s[i] != '\0'; ++i)
			s[i] = toupper(s[i]);
		out << s;
	}
	in.close();
	out.close();
	in.open("TextFile.txt");
	if(in.fail()) {
		cout << "打开失败" << endl;
		exit(0);
	}
	char c;
	in.get(c);
	while (!in.eof()) {
		cout << c;
		in.get(c);
	}
	in.clear();
	in.seekg(0, ios::beg);
	int count = 0;
	while (!in.eof()) {
		string s;
		in >> s;
		if (s == "THE")
			count++;
	}
	in.close();
	cout <<endl<< "共出现" << count << "次" << endl;
	return 0;
}