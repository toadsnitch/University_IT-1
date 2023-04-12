#include <fstream>
#include <iostream>
#include <string>
#define t "\t"
using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

struct Student {
	string surname, name;
	int date, school;
	void print();
	void input();
	bool check();
};

void Student::print(){
	out << surname << t << name << t << date << t << school << endl;
}

void Student::input(){
	in >> surname >> name >> date >> school;
}

bool Student::check() {
	return (school == 32);
}

int main() {
	setlocale(0, "");
	Student arr[10];
	int i = 0, number_s = 32;
	while (in.peek() != EOF) {
		arr[i].input();
		if (arr[i].check()) {
			arr[i].print();
		}

	}

	in.close();
	out.close();
	return 0;
}
