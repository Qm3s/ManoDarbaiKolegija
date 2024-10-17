// Antroji praktinė užduotis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

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










int main()
{
	cout << "Laba diena" << endl;
	int funkcija;
	while (true)
	{


		cout << "Issirinkite viena is 4 funkciju:\n1.Balse ar ne.\n2.Didžiausias bendras daliklis\n3.Trecia Funkcija.\n4.Ketvirta funkcija\n5.Iseiti is proramos." << endl;
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
			cout << "issirinkta ir atlikta " << pasirinkimas << " funkcijan\n" << endl;
			break;
		case 3:
			cout << "issirinkta ir atlikta " << pasirinkimas << " funkcija\n" << endl;
			break;
		case 4:
			cout << "issirinkta ir atlikta " << pasirinkimas << " funkcija\n" << endl;
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
	}
}