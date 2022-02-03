//============================================================================
// Name        : ders48_destructorlar_ve_bellek_sizintilari.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{
public:

	string *s;
	int *i;


	Employee(string str, int ivalue){
		s = new string;

		i = new int;

		*s = str;

		*i = ivalue;

	}

	void show(){
		cout << "String Değer: " << *s << "  Int Değer: " << *i << endl;

	}

	~Employee(){
		cout << "Destructor çağırıldı " << endl;

		delete s;

		delete i;
	}
};

int main() {

	Employee *emp = new Employee("Ahmet Bartu",22);

	emp->show();

	delete emp;

	return 0;
}

