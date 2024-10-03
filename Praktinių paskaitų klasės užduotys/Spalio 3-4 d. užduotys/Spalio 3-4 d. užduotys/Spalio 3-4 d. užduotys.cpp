#include <iostream>
using namespace std;


int suskaičiuotiPerimetra(int krastine) {
    return krastine * 4;  
}


void suskaiciuotiPlota(int krastine, int plotas) {
    plotas = krastine * krastine;  
}

int main() {
    int krastine, perimetras, plotas;

   
    cout << "Iveskite kvadrato krastine: ";
    cin >> krastine;

    
    perimetras = suskaičiuotiPerimetra(krastine);
    cout << "Kvadrato perimetras yra: " << perimetras << endl;

    
    suskaiciuotiPlota(krastine, plotas);
    cout << "Kvadrato plotas yra: " << plotas << endl;

    return 0;
}
