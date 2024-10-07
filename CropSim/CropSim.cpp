#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float carrot_sp = 2.00;
    float corn_sp = 6.00;
    float potato_sp = 1.00;
    float bellpepper_sp = 1.50;

    float carrot_cost = carrot_sp / 3;
    float corn_cost = corn_sp / 3;
    float potato_cost = potato_sp / 3;
    float bellpepper_cost = bellpepper_sp / 3;

    int choice_cost;
    int amount;

    //sell price
    cout << "Current selling price:" << endl;
    cout << "Carrot $" << carrot_sp << endl;
    cout << "Corn $" << corn_sp << endl;
    cout << "Potato $" << potato_sp << endl;
    cout << "Bell pepper $" << bellpepper_sp << endl;

    //menu for things
    cout << "\n" << "Please choose a vegtable and note its costs:" << endl;
    cout << "1. Carrot $" << fixed << setprecision(2) << carrot_cost << endl;
    cout << "2. Corn $" << fixed << setprecision(2) << corn_cost << endl;
    cout << "3. Potato $" << fixed << setprecision(2) << potato_cost << endl;
    cout << "4. Bell pepper $" << fixed << setprecision(2) << bellpepper_cost << endl;

    //input for menu
    cin >> choice_cost;

    //exits program if more than 4 or less than 1
    if (choice_cost < 1 && choice_cost > 4) {
        exit(0);
    }

        switch(choice_cost) {
        case 1:
            cout << "How many carrots would you like to purchase?" << endl; //ask user amount to purchase
            cin >> amount;
            //cal amount spent and output whatever the amount is
            cout << "You spent $" << amount * carrot_cost << " purchasing " << amount << " plants of carrots." << endl;
            //random number of plants destroyed based on a random number
            cout << "Oh No! Extreme weather conditions have destroyed " << rand()%amount << " Carrots plant(s)!" << endl;
            cout << "After selling your remaining " << amount - rand()%amount << " plants, you incurred a loss of $" << ((amount - rand()%amount)*carrot_sp) - (amount * carrot_cost) << endl;
            if ((rand()%amount / amount) < 0.50) {
                cout << "You have lost more than 50% of your crops!" << endl;
            } else if ((rand()%amount / amount) < 0.10) {
                cout << "You have lost more than 10% of your crops!" << endl;
            } else if ((rand()%amount / amount) > 0) {
                cout << "There is no damage to the crops!" << endl;
            } else {
                cout << "" << endl;
            }
            cout << "Hopefully, the weather gods will help you out during the next farming season.";
            break; //optional
        case 2: 
            cout << "How many corn would you like to purchase?" << endl;
            cin >> amount;
            cout << "You spent $" << amount * corn_cost << " purchasing " << amount << " plants of corn." << endl;
            cout << "Oh No! Extreme weather conditions have destroyed " << rand()%amount << " Corn plant(s)!" << endl;
            cout << "After selling your remaining " << amount - rand()%amount << " plants, you incurred a loss of $" << ((amount - rand()%amount)*corn_sp) - (amount * corn_cost) << endl;
            if ((rand()%amount / amount) < 0.50) {
                cout << "You have lost more than 50% of your crops!" << endl;
            } else if ((rand()%amount / amount) < 0.10) {
                cout << "You have lost more than 10% of your crops!" << endl;
            } else if ((rand()%amount / amount) > 0) {
                cout << "There is no damage to the crops!" << endl;
            } else {
                cout << "" << endl;
            }
            cout << "Hopefully, the weather gods will help you out during the next farming season.";
            break; //optional
        case 3: 
            cout << "How many potatos would you like to purchase?" << endl;
            cin >> amount;
            cout << "You spent $" << amount * potato_cost << " purchasing " << amount << " plants of potato." << endl;
            cout << "Oh No! Extreme weather conditions have destroyed " << rand()%amount << " Potato plant(s)!" << endl;
            cout << "After selling your remaining " << amount - rand()%amount << " plants, you incurred a loss of $" << ((amount - rand()%amount)*potato_sp) - (amount * potato_cost) << endl;
            if ((rand()%amount / amount) < 0.50) {
                cout << "You have lost more than 50% of your crops!" << endl;
            } else if ((rand()%amount / amount) < 0.10) {
                cout << "You have lost more than 10% of your crops!" << endl;
            } else if ((rand()%amount / amount) > 0) {
                cout << "There is no damage to the crops!" << endl;
            } else {
                cout << "" << endl;
            }
            cout << "Hopefully, the weather gods will help you out during the next farming season.";
            break; //optional
        case 4: 
            cout << "How many bell peppers would you like to purchase?" << endl;
            cin >> amount;
            cout << "You spent $" << amount * bellpepper_cost << " purchasing " << amount << " plants of bell pepper." << endl;
            cout << "Oh No! Extreme weather conditions have destroyed " << rand()%amount << " Bell pepper plant(s)!" << endl;
            cout << "After selling your remaining " << amount - rand()%amount << " plants, you incurred a loss of $" << ((amount - rand()%amount)*bellpepper_sp) - (amount * bellpepper_cost) << endl;
            if ((rand()%amount / amount) < 0.50) {
                cout << "You have lost more than 50% of your crops!" << endl;
            } else if ((rand()%amount / amount) < 0.10) {
                cout << "You have lost more than 10% of your crops!" << endl;
            } else if ((rand()%amount / amount) > 0) {
                cout << "There is no damage to the crops!" << endl;
            } else {
                cout << "" << endl;
            }
            cout << "Hopefully, the weather gods will help you out during the next farming season.";
            break; //optional
        }
    return 0;
}