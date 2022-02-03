#include <iostream>
using namespace std;

int main(){

	/*ğint i = 0;

	while (i < 10) {
		if (i == 3 || i == 5){
			i++;
			continue;
		}
		cout << "i : " << i << endl;
		i++;
	}*/

	string sys_username = "ahmet_bartu_yilmaz";
	string sys_password = "123456";

	string username;
	string password;

	while(true){
		cout <<"Kullanıcı Adı: ";
		cin >> username;
		cout << "Parola : ";
		cin >> password;

		if (username == sys_username && password == sys_password){
			cout <<"Hoşgeldiniz, "<< username<< endl;
			break;
		}
		else if(username != sys_username && password == sys_password){
			cout << "Kullanıcı Ad Hatalı" << endl;
		}
		else if(username == sys_username && password != sys_password){
					cout << "Parola Hatalı" << endl;
				}
		else {
			cout <<"Kullanıcı Adı ve Parola Hatalı"<< endl;
		}
	}
	return 0;
}
