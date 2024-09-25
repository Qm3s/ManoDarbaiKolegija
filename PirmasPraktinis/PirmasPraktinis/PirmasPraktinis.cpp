#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    double GBP_Bendras = 0.8593;
    double GBP_Pirkti = 0.8450;
    double GBP_Parduoti = 0.9060;
    double USD_Bendras = 1.0713;
    double USD_Pirkti = 1.0547;
    double USD_Parduoti = 1.1309;
    double INR_Bendras = 88.8260;
    double INR_Pirkti = 85.2614;
    double INR_Parduoti = 92.8334;

    int operacijos_pasirinkimas;
    int valiutos_pasirinkimas;
    int EURtoAnother;

    char pakartoti;
    do
    {
        cout << fixed << setprecision(2); // Устанавливаем вывод с двумя знаками после запятой

        cout << "\nLaba diena, programma pades jums konvertuoti eur i kitas valiutas skirtingais budais\n" << endl;

        cout << "Pasirinkite operacija:(1.2.3)\n 1.Pirkti valiuta uz EUR\n 2.Parduti valiuta uz EUR\n 3.Paliginti bendra kursa" << endl;
        cin >> operacijos_pasirinkimas;

        cout << "Pasirinkite valiuta:(1.2.3)\n GPB,USD,INR." << endl;
        cin >> valiutos_pasirinkimas;

        string valiuta;
        switch (valiutos_pasirinkimas)
        {
        case 1:
            valiuta = "GBP";
            break;
        case 2:
            valiuta = "USD";
            break;
        case 3:
            valiuta = "INR";
            break;
        default:
            cout << "Neteisingas pasirinkimas" << endl;
            return 0;
            break;
        }

        double value;
        if (operacijos_pasirinkimas == 1)
        {
            cout << "Iveskite suma" << endl;
            cin >> value;
            switch (valiutos_pasirinkimas)
            {
            case 1:
                cout << "Jus nupirkot " << value << " " << valiuta << " uz " << value / GBP_Pirkti << " EUR";
                break;
            case 2:
                cout << "Jus nupirkot " << value << " " << valiuta << " uz " << value / USD_Pirkti << " EUR";
                break;
            case 3:
                cout << "Jus nupirkot " << value << " " << valiuta << " uz " << value / INR_Pirkti << " EUR";
                break;
            }
        }

        if (operacijos_pasirinkimas == 2)
        {
            cout << "Iveskite suma" << endl;
            cin >> value;
            switch (valiutos_pasirinkimas)
            {
            case 1:
                cout << "Jus pardavet " << value << " GBP uz " << value / GBP_Parduoti;
                break;
            case 2:
                cout << "Jus pardavet " << value << " USD uz " << value / USD_Parduoti;
                break;
            case 3:
                cout << "Jus pardavet " << value << " INR uz " << value / INR_Parduoti;
                break;
            }
        }

        if (operacijos_pasirinkimas == 3)
        {
            cout << "1.Paliginti EUR su " << valiuta << "\n2.Paliginti " << valiuta << " su EUR" << endl;
            cin >> EURtoAnother;
            cout << "Iveskite suma" << endl;
            cin >> value;

            if (EURtoAnother == 1)
            {
                switch (valiutos_pasirinkimas)
                {
                case 1:
                    cout << value << " EUR = " << value * GBP_Bendras << " GBP";
                    break;
                case 2:
                    cout << value << " EUR = " << value * USD_Bendras << " USD";
                    break;
                case 3:
                    cout << value << " EUR = " << value * INR_Bendras << " INR";
                    break;
                }
            }
            else if (EURtoAnother == 2)
            {
                switch (valiutos_pasirinkimas)
                {
                case 1:
                    cout << value << " " << valiuta << " = " << value / GBP_Bendras << " EUR";
                    break;
                case 2:
                    cout << value << " " << valiuta << " = " << value / USD_Bendras << " EUR";
                    break;
                case 3:
                    cout << value << " " << valiuta << " = " << value / INR_Bendras << " EUR";
                    break;
                }
            }
        }

        cout << "\n\nAr norite atlikti kitas operacijas?\n1.Taip\n2.Ne" << endl;
        cin >> pakartoti;

    } while (pakartoti == '1');

    cout << "Viso gero" << endl;
    return 0;
}
