//
// Created by Matth on 12/7/2023.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <map>

using namespace std;
#ifndef CORNERGROCER_GROCERYLIST_H
#define CORNERGROCER_GROCERYLIST_H

namespace GROCERYLIST{
    class GroceryList{
    public:
        vector<string> groceryList;
        set<string> uniqueItems;
        map<string, int> itemAndCount;

        int PrintMenu();
        void HandleChoice(int choice);
        void ItemCount();
        void AllItemsAndCount();
        void ItemHistogram();
    };
}
#endif //CORNERGROCER_GROCERYLIST_H
