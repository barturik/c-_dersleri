//============================================================================
// Name        : ders38_siniflama_metodlar�.cpp
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

	void tellName(){
		cout << "Benim Adım " << name << endl;
	}

};

int main() {

	Student student1;
	Student student2;

	student1.name = "Ahmet Bartu";
	student2.name = "Yağmur";

	student1.tellName();
	student2.tellName();

	return 0;
}
