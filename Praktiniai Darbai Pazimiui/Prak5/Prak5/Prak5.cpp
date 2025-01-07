#include <iostream>
#include <string>
using namespace std;

struct kontaktas {
    int id;
    string vardas;
    string pavarde;
    string numeris;
};

kontaktas* kontaktai = nullptr;
int kiekKontaktu = 0;
int masyvoDydis = 2;

void pridetiKontakta(string vardas, string pavarde, string numeris) {
    if (kontaktai == nullptr) {
        kontaktai = new kontaktas[masyvoDydis];
    }

    if (kiekKontaktu == masyvoDydis) {
        masyvoDydis *= 2;
        kontaktas* naujaskontaktas = new kontaktas[masyvoDydis];

        for (int i = 0; i < kiekKontaktu; i++) {
            naujaskontaktas[i] = kontaktai[i];
        }

        delete[] kontaktai;
        kontaktai = naujaskontaktas;
    }

    kontaktai[kiekKontaktu].id = kiekKontaktu + 1;
    kontaktai[kiekKontaktu].vardas = vardas;
    kontaktai[kiekKontaktu].pavarde = pavarde;
    kontaktai[kiekKontaktu].numeris = numeris;
    kiekKontaktu++;
}

void deleteContact(int id) {
    bool found = false;
    for (int i = 0; i < kiekKontaktu; i++) {
        if (kontaktai[i].id == id) {
            found = true;

            for (int j = i; j < kiekKontaktu - 1; j++) {
                kontaktai[j] = kontaktai[j + 1];
            }
            kiekKontaktu--;
            cout << "Kontaktas istrintas" << endl;
            break;
        }
    }
    if (!found) {
        cout << "Contact with ID " << id << " not found." << endl;
    }
}

void printKontakt() {
    if (kiekKontaktu == 0) {
        cout << "Nera kontaktu";
        return;
    }
    for (int i = 0; i < kiekKontaktu; i++) {
        cout << "Id: " << kontaktai[i].id << endl;
        cout << "Vardas: " << kontaktai[i].vardas << endl;
        cout << "Pavarde: " << kontaktai[i].pavarde << endl;
        cout << "Numeris: " << kontaktai[i].numeris << endl;
    }
}

void uzpildytiMasyva(int eilutes, int stulpeliai, int** matrica) {
    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < stulpeliai; j++) {
            cout << "\u012eveskite element\u0105 [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> matrica[i][j];
        }
    }
}

void showMasivas(int eilutes, int stulpeliai, int** matrica) {
    cout << "Matrica: " << endl;
    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < stulpeliai; j++) {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }
}

void stulpelioSuma(int eilutes, int stulpeliai, int** matrica) {
    cout << "Pasirinkite stulpeli tarp 1 ir " << stulpeliai << endl;
    int stulpelis;
    cin >> stulpelis;
    stulpelis--;

    if (stulpelis < 0 || stulpelis >= stulpeliai) {
        cout << "Neteisingas stulpelio numeris." << endl;
        return;
    }

    int stulpelioSuma = 0;
    for (int i = 0; i < eilutes; i++) {
        stulpelioSuma += matrica[i][stulpelis];
    }

    cout << "Stulpelio suma = " << stulpelioSuma << endl;
}

void eiluciuSuma(int eilutes, int stulpeliai, int** matrica) {
    cout << "Pasirinkite eilute tarp 1 ir " << eilutes << endl;
    int eilute;
    cin >> eilute;
    eilute--;

    if (eilute < 0 || eilute >= eilutes) {
        cout << "Neteisingas eilutes numeris." << endl;
        return;
    }

    int eilutesSuma = 0;
    for (int i = 0; i < stulpeliai; i++) {
        eilutesSuma += matrica[eilute][i];
    }

    cout << "Eilutes suma = " << eilutesSuma << endl;
}

int main()
{
    while (true)
    {
        int operacija;
        cout << "Pasirinkite programa" << endl;
        cout << "1. Matrica" << endl;
        cout << "2. Telefonas" << endl;
        cout << "3. Iseiti" << endl;
        cin >> operacija;

        switch (operacija)
        {
        case 1:
        {
            int stulpeliai, eilutes;
            cout << "Kiek eiluciu?" << endl;
            cin >> eilutes;
            cout << "Kiek stulpeliu?" << endl;
            cin >> stulpeliai;

            int** matrica = new int* [eilutes];
            for (int i = 0; i < eilutes; ++i) {
                matrica[i] = new int[stulpeliai];
            }

            uzpildytiMasyva(eilutes, stulpeliai, matrica);

            while (true) {
                cout << "Operacija: " << endl;
                cout << "1. Rodyti masyva" << endl;
                cout << "2. Eilutes suma" << endl;
                cout << "3. Stulpelio suma" << endl;
                cout << "4. Atgal" << endl;
                int oper;
                cin >> oper;

                if (oper == 1) {
                    showMasivas(eilutes, stulpeliai, matrica);
                }
                else if (oper == 2) {
                    eiluciuSuma(eilutes, stulpeliai, matrica);
                }
                else if (oper == 3) {
                    stulpelioSuma(eilutes, stulpeliai, matrica);
                }
                else if (oper == 4) {
                    break;
                }
                else {
                    cout << "Neteisingas pasirinkimas." << endl;
                }
            }

            for (int i = 0; i < eilutes; ++i) {
                delete[] matrica[i];
            }
            delete[] matrica;
            break;
        }

        case 2:
        {
            while (true) {
                int choice;
                cout << "\nPasirinkimas\n";
                cout << "1. Prideti nauja kontakta\n";
                cout << "2. Visi kontaktai\n";
                cout << "3. Trinti kontakta\n";
                cout << "4. Iseiti\n";
                cout << "1-4 : ";
                cin >> choice;

                if (choice == 1) {
                    string vardas, pavarde, numeris;
                    cout << "Iveskite varda: ";
                    cin >> vardas;
                    cout << "Pavarde: ";
                    cin >> pavarde;
                    cout << "Numeris: ";
                    cin >> numeris;
                    pridetiKontakta(vardas, pavarde, numeris);
                }
                else if (choice == 2) {
                    cout << "\nVisi kontaktai" << endl;
                    printKontakt();
                }
                else if (choice == 3) {
                    int idDelete;
                    cout << "Iveskite ID ";
                    cin >> idDelete;
                    deleteContact(idDelete);
                }
                else if (choice == 4) {
                    break;
                }
                else {
                    cout << "Neteisingas pasirinkimas." << endl;
                }
            }
            break;
        }

        case 3:
            return 0;

        default:
            cout << "Neteisingas pasirinkimas." << endl;
            break;
        }
    }
}
