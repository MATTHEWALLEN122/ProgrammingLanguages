//
// Created by Matth on 12/7/2023.
//
#include "GroceryList.h"

using namespace GROCERYLIST;

namespace GROCERYLIST{
    void GroceryList::ItemCount() {
        string item;
        cout << "Enter item name: " << endl;
        cin >> item;

        cout << endl << itemAndCount[item] << endl;
    }

    void GroceryList::AllItemsAndCount() {
        cout << endl;
        for (pair<string, int> pair : itemAndCount){
            cout << pair.first << " " << pair.second << endl;
        }
        cout << endl;
    }

    void GroceryList::ItemHistogram() {
        cout << endl;
        for (pair<string, int> pair : itemAndCount){
            cout << pair.first << " ";
            for (int i = 0; i < pair.second; i++){
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }

    int GroceryList::PrintMenu(){
        cout << endl;
        int choice;
        cout << "************************************************" << endl;
        cout << "********************  MENU  ********************" << endl;
        cout << "************************************************" << endl;
        cout << "Enter 1 to get count for a specific item" << endl;
        cout << "Enter 2 to get list of items and their count." << endl;
        cout << "Enter 3 to get histogram of items and their count" << endl;
        cout << "Hit any button to quit." << endl;
        cin >> choice;
        cout << endl;

        return choice;
    }

    void GroceryList::HandleChoice( int choice ){
        switch (choice){
            case 1:
                GroceryList::ItemCount();
                break;
            case 2:
                GroceryList::AllItemsAndCount();
                break;
            case 3:
                GroceryList::ItemHistogram();
                break;
            default:
                break;
        }

    }
}