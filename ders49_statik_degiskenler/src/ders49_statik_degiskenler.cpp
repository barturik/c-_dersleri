//============================================================================
// Name        : ders49_statik_degiskenler.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// statik değişkenler bellekte kalmaya devam ederler

void Test(){

	static int i = 3;
	i++;
	cout << "i'nin değeri: " << i << endl;

}

int main() {

	Test();
	Test();
	Test();


	return 0;
}
