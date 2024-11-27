#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct menuItemType {
    string menuItem;
    double menuPrice;
};
vector<menuItemType> menuList = {
       {"Kiausiniene", 1.45},
       {"Kiaulienos soninė su keptu kiausiniu", 2.45},
       {"Keksiukas su vysnia", 0.99},
       {"Prancuziskas skrebutis", 1.99},
       {"Vaisiu salotos", 2.49},
       {"Pusryčiu dribsniai", 0.69},
       {"Kava ", 0.50},
       {"Arbata", 0.75},
};

struct menuItemOrder
{
    string menuItem;
    double menuPrice;
    double amount;
};
vector<menuItemOrder> menuOrder = {
        
};

void mainMenu() {
    
    
    cout << "1.Redaguoti menu" << endl;
    cout << "2.Uzsakuti patiekalus" << endl;
    cout << "3.Gauti saskaita" << endl;
    
}

void showMenu() {
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < menuList.size(); i++)
    {
        cout << i + 1 << ". " << menuList[i].menuItem << " - $" << menuList[i].menuPrice << endl;
    }
    cout << "------------------------------------------------" << endl;
}
void showOrder() {
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < menuOrder.size(); i++)
    {
        cout << i + 1 << ". " << menuOrder[i].menuItem << " - $" << menuOrder[i].menuPrice << " - |" << menuOrder[i].amount << "|" << endl;
    }
    cout << "------------------------------------------------" << endl;
}

void getDataToMainMenu() {
    string name;
    double price;
    printf("Iveskite patiekalo pavadinima: ");
    cin >> name;
    printf("\nIveskite kaina: ");
    cin >> price;
    menuList.push_back({ name, price });
    cout << "Menu sekmingai pakeistas!" << endl;
   
}            

void getDataToOrder() {

    showMenu();
    double kiek;
    int position;
    printf("Iveskite norimo patiekalo pozivcija: ");
    cin >> position;
    printf("Kiek porciju noresit: ");
    cin >> kiek;
    menuOrder.push_back({ menuList[position - 1].menuItem, menuList[position - 1].menuPrice, kiek });
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
            getDataToMainMenu();
            showMenu();
        }
        if (operacija == 2)
        {
            getDataToOrder();
            showOrder();
        }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
}

