//============================================================================
// Name        : ders37_class_OOP_giris.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student{
public:

	string name;



};

int main() {

	Student student1;

	Student student2;

	student2.name = "Yagmur";
	student1.name = "Ahmet Bartu";

	cout << "Öğrenci 1 İsmi: " << student1.name << endl;
	cout << "Öğrenci 2 İsmi: " << student2.name << endl;


	return 0;
}
