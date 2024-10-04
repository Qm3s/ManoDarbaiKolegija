#include <iostream>
using namespace std;


int suskaičiuotiPerimetra(int krastine) {
    return krastine * 4;
}
void suskaiciuotiPlota(int krastine, int &plotas) {
    plotas = krastine * krastine;
} 
//ploto ir pirimetro funkcijos  ////ploto ir pirimetro funkcijos
double celsiusToFahrenhei(double tempCelcius) {
    return tempCelcius * 1.8 + 32;
}
void fahrenheitToCelsius(double tempFahrenheit, double& tempCelsius) {
    tempCelsius = (tempFahrenheit - 32) / 1.8;
}

int main() {
    cout << "Pasirinkite operacija\n1.Kvadrato pirimetras ir plotas\n2.Celsijus į Farenheitas" << endl;
    int pasirinkimas;
    cin >> pasirinkimas;
    switch (pasirinkimas)
    {
        
    case 1:
        int krastine, perimetras, plotas;
        
        cout << "Iveskite kvadrato krastine: ";
        cin >> krastine;

        perimetras = suskaičiuotiPerimetra(krastine);
        cout << "Kvadrato perimetras yra: " << perimetras << endl;

        suskaiciuotiPlota(krastine, plotas);
        cout << "Kvadrato plotas yra: " << plotas << endl;
        break;
    case 2:
        int pasirinkimas2;
        double tempFarenheit;
        double tempCelcius;
        cout << "1.C to F.\n2.F to C" << endl;
        cin >> pasirinkimas2;
        if (pasirinkimas2==1)
        {
            cout << "Iveskite C reiksme" << endl;
            cin >> tempCelcius;
            tempFarenheit = celsiusToFahrenhei(tempCelcius);
            cout << tempCelcius << "C = F" << tempFarenheit;
        }
        else
        {
            cout << "Iveskite F reiksme" << endl;
            cin >> tempFarenheit;
            fahrenheitToCelsius(tempFarenheit, tempCelcius);
            cout << tempFarenheit << "F = C" << tempCelcius;

        }
        
        break;

        
       
    }

    

    return 0;
}
