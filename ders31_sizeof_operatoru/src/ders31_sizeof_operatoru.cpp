//============================================================================
// Name        : ders31_sizeof_operatoru.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Student{
	int id;
	char letter;
};

int main() {

	int a = 10;

	cout << "Integer: " << sizeof(char) << endl;
	cout << "Integer: " << sizeof(double) << endl;
	cout << "Integer: " << sizeof(float) << endl;
	cout << "Student: " << sizeof(Student) << endl;



	return 0;
}
