#include <iostream>
#include <string>
#include "hash.h"

#define MAGIC 0x63

using namespace std;

int hash_function(string text) {
    int hash_val = 0;
    for (int i = 0; i < text.size(); i++) {
        hash_val += text[i] * MAGIC;
    }
    return hash_val;
}

HashTable::HashTable(int slot_amt) {
    slot_amount = slot_amt;
    slots = new LinkedList[slot_amt];
}

void HashTable::insert(std::string str) {
    int slot_index = hash_function(str) % slot_amount;
    slots[slot_index].append(str);
}

void HashTable::displaySlots() {
    for (int i = 0; i < slot_amount; i++) {
        std::cout << "Slot #" << i << ": ";
        slots[i].print();
    }
}

void HashTable::displaySlotLengths() {
    for (int i = 0; i < slot_amount; i++) {
        std::cout << "Length: " << slots[i].get_length() << std::endl;
    }
}