// Antroji praktinė užduotis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Finkcijos
bool arBalsis(char raide) {
	bool balsis = false;
	switch (raide)
	{
	


	}

}










int main()
{
	cout << "Laba diena" << endl;
	int funkcija;
	while (true)
	{


		cout << "Issirinkite viena is 4 funkciju:\n1.Pirma funkcija.\n2.Antra funkcija\n3.Trecia Funkcija.\n4.Ketvirta funkcija\n5.Iseiti is proramos." << endl;
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

		}
	}
}