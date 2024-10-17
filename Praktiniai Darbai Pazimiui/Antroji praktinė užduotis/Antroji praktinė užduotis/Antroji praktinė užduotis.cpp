// Antroji praktinė užduotis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// pagrindas
void print(string word) {
	cout << word;
}
int getRandomNumber() {
	srand(time(nullptr));
	int randomNum = rand() % 10 + 1;
	return randomNum;
}

// FUNKCIJOS

//Funkcija 1 
bool arBalsis(char raide) {
	bool balsis = false;
	switch (raide) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		balsis = true;
		break;
	default:
		balsis = false;
		break;
	}
	return balsis;
}

//Funkcija 2
void zaidimas() {
	int teisingas_ats = getRandomNumber();
	int vartotojo_ats;
	print("Jums reikia atspet skaicu tarp 1 ir 10 (imtinai)\n");
	do
	{
		cin >> vartotojo_ats;
		if (vartotojo_ats < teisingas_ats)
		{
			print("Jusu atsakimas mazesnis negu reikia\n");
		}
		else if (vartotojo_ats > teisingas_ats)
		{
			print("Jusu atsakimas didesnis negu reikia\n");
		}
		else
		{
			print("Sveikinu jus laimejot!");
		}
	} while (vartotojo_ats != teisingas_ats);
	
}








int main()
{
	cout << "Laba diena" << endl;
	int funkcija;
	while (true)
	{


		cout << "Issirinkite viena is 4 funkciju:\n1.Balse ar ne.\n2.Didžiausias bendras daliklis\n3.Atspek skaiciu.\n4.Ketvirta funkcija\n5.Iseiti is proramos." << endl;
		cin >> funkcija;


		string pasirinkimas; // cia kad paprasciau dirbti su finkcijas ir kiek viana karta ne rasiti kokia funkcija buvo atlikta
		switch (funkcija)
		{
		case 1:
			pasirinkimas = "pirma";
			break;
		case 2:
			pasirinkimas = "antra";
			break;
		case 3:
			pasirinkimas = "trecia";
			break;
		case 4:
			pasirinkimas = "ketvirta";
			break;
		}


		switch (funkcija)
		{
		default:
			cout << "Neteisingas pasirinkimas\nBanidkite dar karta\n" << endl;
			break;
		case 1:
			cout << "issirinkta " << pasirinkimas << " funkcija\n" << endl;
			break;
		case 2:
			cout << "issirinkta " << pasirinkimas << " funkcija\n" << endl;
			break;
		case 3:
			cout << "issirinkta " << pasirinkimas << " funkcija\n" << endl;
			break;
		case 4:
			cout << "issirinkta " << pasirinkimas << " funkcija\n" << endl;
			break;
		case 5:
			cout << "Viso gero" << endl;
			return 0;
		}

		if (funkcija == 1)
		{
			char raide;
			cout << "iveskite raide ";
			cin >> raide;

			if (arBalsis(raide)) {
				cout << "Ivestas simbolis yra balsis.\n";
			}
			else {
				cout << "Ivestas simbolis nera balsis.\n";

			}
		}
		if (funkcija == 2)
		{

		}
		if (funkcija == 3)
		{
			zaidimas();
			cout << "\n" << endl;
		}
	}
}