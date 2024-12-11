#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


struct menuItemType {
    string menuItem;
    double menuPrice;
};
int const masyvo_dydis = 8;
menuItemType menuList[8] = {
    {"Kiausiniene", 1.45},
    {"Kiaulienos sonine su keptu kiausiniu", 2.45},
    {"Keksiukas su vysnia", 0.99},
    {"Prancuziskas skrebutis", 1.99},
    {"Vaisiu salotos", 2.49},
    {"Pusryčiu dribsniai", 0.69},
    {"Kava", 0.50},
    {"Arbata", 0.75},
};


struct menuItemOrder
{
    string menuItem;
    double menuPrice;
    double amount;
};
menuItemOrder menuOrder[8] = {
    

};

void clearConsole() {
    for (int i = 0; i < 100; i++) {
        cout << endl;
    }
}


void mainMenu() {
    
    
    cout << "1.Show menu" << endl;
    cout << "2.Uzsakuti patiekalus" << endl;
    cout << "3.Gauti saskaita" << endl;
    
}

void showMenu() {
    clearConsole();
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < masyvo_dydis; i++)
    {
        cout << i + 1 << ". " << menuList[i].menuItem << " - $" << menuList[i].menuPrice << endl;
    }
    cout << "------------------------------------------------" << endl;
    
}
void showOrder() {
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < masyvo_dydis; i++) {
        
        if (menuOrder[i].amount > 0) {
            cout << i + 1 << ". " << menuOrder[i].menuItem << " - $"
                << menuOrder[i].menuPrice << " - |" << menuOrder[i].amount << "|" << endl;
        }
    }
    cout << "------------------------------------------------" << endl;
}


void getDataToOrderMenu() {
    char oneMore = '1';  
    int i = 0; 
    int choice = 1;

    while (choice != 0) {  

        showMenu();
        
        printf("Iveskite patiekalo pozicija ( '0' kad iseiti ) : ");
        cin >> choice;
        if (choice == 0)
        {
            break;
        }
        
        printf("\nIveskite kiek noresit: ");  
        int amount;
        cin >> amount;

        
        menuOrder[i].menuItem = menuList[choice - 1].menuItem;
        menuOrder[i].menuPrice = menuList[choice - 1].menuPrice;
        menuOrder[i].amount = amount;

        clearConsole();
        printf("Sekmingai prideta\n"); 
        showOrder();

        i++;  

       
        
        clearConsole();
    }
    
}

void howMuch() {
    printf("Jusu uzsakimas:\n");
    showOrder();
    cout << "------------------------------------------------" << endl;
    double mainPrice = 0;
    for (int i = 0; i < masyvo_dydis; i++)
    {
        mainPrice = mainPrice + menuOrder[i].menuPrice * menuOrder[i].amount;
    }
    cout << fixed << setprecision(2);
    cout << "Kaina be mokesciu - " << mainPrice << "EUR" << endl;
    cout << "Mokesciai - " << mainPrice * 0.21 << "EUR" << endl;
    cout << "Galutine kaina - " << mainPrice + mainPrice * 0.21 << "EUR" << endl;
    cout << "------------------------------------------------" << endl;
   
        ofstream Failas("Ataskaita.txt");

        
            
            Failas << "=============== RESTORANAS ===========" << endl;
            

            for (int i = 0; i < masyvo_dydis; i++) {

                if (menuOrder[i].amount > 0) {
                    Failas << i + 1 << ". " << menuOrder[i].menuItem << " - $"
                        << menuOrder[i].menuPrice << " - |" << menuOrder[i].amount << "|" << endl;
                }
            }
            Failas << "------------------------------------------------" << endl;

            Failas << fixed << setprecision(2);
            Failas << "Kaina be mokesciu - " << mainPrice << "EUR" << endl;
            Failas << "Mokesciai - " << mainPrice * 0.21 << "EUR" << endl;
            Failas << "Galutine kaina - " << mainPrice + mainPrice * 0.21 << "EUR" << endl;
            Failas << "------------------------------------------------" << endl;
            
            
            Failas.close();
            cout << "Failas 'Ataskaita.txt' paruostas" << endl;
        
        

       
    }








int main()
{ 
    cout << "=======RESTORANAS===" << endl;
    while (true)
    {


        mainMenu();
        int operacija;
        cin >> operacija;

        if (operacija == 1)
        {
            showMenu();
        }
        if (operacija == 2)
        {
            
            getDataToOrderMenu();
            showOrder();
        }
        if (operacija == 3)
        {
            clearConsole();
            howMuch();
            return 0;
        }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
}

