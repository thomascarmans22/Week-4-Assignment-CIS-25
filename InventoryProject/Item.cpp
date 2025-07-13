#include <iostream>
#include "Item.h"
using namespace std;

Item::Item() {
    name = "Unknown";
    quantity = 0;
}

Item::Item(string itemName, int itemQty) {
    name = itemName;
    quantity = itemQty;
}

void Item::display() {
    cout << "Item: " << name << ", Quantity: " << quantity << endl;
}