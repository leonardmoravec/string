// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

	string slovo = "Mount everest";
	string samohlasky = "aeiouyAEIUOY";
	string spoluhlasky = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
	string cisla = "0123456789";
	string znaky = " ";
	cout << "Povodna sprava je " << slovo << endl;
	int pocitadlosamohlasok = 0;
	int pocitadlospoluhlasok = 0;
	int pocitadlocisiel = 0;
	int others = 0;
	for (int i = 0; i < slovo.length(); i++) {
		if (samohlasky.find(slovo[i]) < samohlasky.length()) {
			pocitadlosamohlasok++;
		}
	}
	for (int i = 0; i < slovo.length(); i++) {
		if (spoluhlasky.find(slovo[i]) < spoluhlasky.length()) {
			pocitadlospoluhlasok++;
		}
	}
	for (int i = 0; i < slovo.length(); i++) {
		if (cisla.find(slovo[i]) < cisla.length()) {
			pocitadlocisiel++;

		}
	}
	for (int i = 0; i < slovo.length(); i++) {
		if (znaky.find(slovo[i]) < znaky.length()) {
			others++;
		}
	}










	cout << "Pocet samohlasok je " << pocitadlosamohlasok << endl;
	cout << "Pocet spoluhlasok je " << pocitadlospoluhlasok << endl;
	cout << "Pocet cisiel je " << pocitadlocisiel << endl;
	cout << "Ostnatych znakov je " << others << endl;



	return 0;
}

