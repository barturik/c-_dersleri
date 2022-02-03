//============================================================================
// Name        : ders50_statik_sinif_uyeleri.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Gamer {
public:
	static int gamers;
	Gamer(){
		gamers++;
		cout << "Yeni oyuncu oluşturuldu" << endl;
	}

};
int Gamer::gamers = 0;

int main() {

	Gamer gamer1;
	Gamer gamer2;
	Gamer gamer3;
	Gamer gamer4;
	cout << Gamer::gamers << endl;


	return 0;
}
