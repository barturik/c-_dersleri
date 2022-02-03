//============================================================================
// Name        : ders44_this_pointer.cpp
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
	int salary;
	int id;

public:

	Employee(string name, int salary, int id){
		this->name = name;
		this->salary = salary;
		this->id = id;
	}

	void setSalary(int salary){
		this->salary = salary;
	}

	int getSalary(){
		return salary;
	}


	void setName(string name){
		this->name = name;
	}

	string getName(){
		return name;
	}

	void showInfos(){
		cout << "İsim: " << this->name << endl;
		cout << "Maaş: " << this->salary << endl;
		cout << "Kimlik: " << this->id << endl;
	}

};

int main() {

	Employee employee("Ahmet Bartu",10000,17);

	employee.showInfos();



	return 0;
}
