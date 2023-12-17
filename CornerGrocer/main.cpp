#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <iomanip>

#include "GroceryList.h"

using namespace std;
using namespace GROCERYLIST;

int main() {
    string line;
    ifstream inFile;
    ofstream outFile;
    GroceryList groceryList;


    inFile.open(R"(..\CS210_Project_Three_Input_File.txt)");
    if(!inFile.is_open()) { cout << "infile not open" << endl; }

    outFile.open(R"(..\CS210_Project_Three_Output_File.dat)");
    if(!outFile.is_open()) { cout << "outfile not open" << endl; }

    while(!inFile.eof()){
        inFile >> line;
        groceryList.groceryList.push_back(line);
        groceryList.uniqueItems.insert(line);
    }

    for (const string& item: groceryList.uniqueItems){
        int count = 0;
        for ( const string& g : groceryList.groceryList){
            if (g == item) { count++; }
        }
        groceryList.itemAndCount[item] = count;

        outFile << item << " " << count << "\n";
    }

    inFile.close();
    outFile.close();

    bool _continue = true;
    while (_continue){
        auto choice = groceryList.PrintMenu();

        if ( choice == 1 || choice == 2 || choice == 3 ){
            groceryList.HandleChoice(choice);
        }
        else{
            _continue = false;
        }
    }


    return 0;
}
