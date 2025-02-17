#include <iostream>
#include <string>
#include <cmath>
#include "linked_list.h"
#pragma once
// You are free to use additional libraries as long as it's not PROHIBITED per instruction.

using namespace std;

int hash_function(string text);

class HashTable {
    private:
        int slot_amount;
        LinkedList* slots;
    public:
        HashTable(int slots);
        void insert(std::string str);

        //output stuff
        void displaySlots();
        void displaySlotLengths();
        void displaySlotStdDev();
};