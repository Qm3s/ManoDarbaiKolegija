#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct menuItemType {
    std::string menuItem;
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

void mainMenu() {
    
    
    cout << "1.Show menu" << endl;
    cout << "2.Uzsakuti patiekalus" << endl;
    cout << "3.Gauti saskaita" << endl;
    
}

void showMenu() {
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < masyvo_dydis; i++)
    {
        cout << i + 1 << ". " << menuList[i].menuItem << " - $" << menuList[i].menuPrice << endl;
    }
    cout << "------------------------------------------------" << endl;
}
void showOrder() {
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < masyvo_dydis; i++)
    {
        cout << i + 1 << ". " << menuOrder[i].menuItem << " - $" << menuOrder[i].menuPrice << " - |" << menuOrder[i].amount << "|" << endl;
    }
    cout << "------------------------------------------------" << endl;
}

void getDataToOrderMenu() {
    char oneMore = '1';  
    int i = 0; 

    while (oneMore == '1') {  

        int choice;
        double price;
        printf("Iveskite patiekalo pozicija: ");  
        cin >> choice;
        printf("\nIveskite kiek noresit: ");  
        int amount;
        cin >> amount;

        
        menuOrder[i].menuItem = menuList[choice - 1].menuItem;
        menuOrder[i].menuPrice = menuList[choice - 1].menuPrice;
        menuOrder[i].amount = amount;

        printf("Sekmingai prideta\n"); 
        showOrder();

        i++;  

        printf("%d IIII\n", i);  

        
        printf("Ar noresit pridet dar kaz-ka? \n1.Yes 2.No\n");
        cin >> oneMore;
    }
}

void howMuch() {

}





int main()
{ 
    cout << "Laba diena, pasirinkite funkcija:" << endl;
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
            showMenu();
            getDataToOrderMenu();
            showOrder();
        }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
}

