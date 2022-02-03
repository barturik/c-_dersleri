//============================================================================
// Name        : ders39_header_dosyalari.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>

using namespace std;

class Employee{
private:
	string name;

public:

	void setName(string isim){
		name = isim;
	}

	string getName(){
		return name;
	}

};

int main() {

	Employee employee;

	employee.setName("Ahmet Bartu");

	cout << employee.getName() << endl;




	return 0;
}
