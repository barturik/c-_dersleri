//============================================================================
// Name        : ders53_const_sinif_uyeleri_ve_metodlari.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
private:
	int a;
public:
	Test(int a){
		this->a = a;

	}

	void test(){
		cout << "Test Metodu" << endl;
	}

	int getValue()const { // Bu metod herhangi bir değeri değiştiremez. Const olmayan metodları çağıramaz.

		return this->a;
	}
};

void test(const Test &test){
	cout << test.getValue() << endl;


}

int main() {
	Test test1(10);
	test(test1);







	return 0;
}
