//============================================================================
// Name        : ders47_destructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{
public:
	Employee(){
		cout <<"Constructor Çağırıldı " << endl;
	}

	~Employee(){
		cout << "Destructor çağırıldı " << endl;
	}
};

int main() {

	Employee *emp = new Employee();

	delete emp;

	return 0;
}
