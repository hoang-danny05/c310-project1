#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

//google polynomial rolling function
// std dev from 2-3 is normal
// best ever was 0.9
int hash_function(string text) {
  const int large_limit = 1e9+9;
  const int magic_prime = 53; // roughly equal to the number of letters
  int hash_value = 0;
  // starts at p^0 and becomes p^i
  int prime_power = 1;
  for (int i = 0; i < text.size(); i++) {
    hash_value = 
      (hash_value + (text[i] - 'A' + 1) * prime_power) % large_limit;
  }
  return hash_value;
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

void HashTable::displaySlotStdDev() {
    if (slot_amount == 0) {
        std::cout << "0.0\n";
        return;
    }

    double sum = 0.0;
    for (int i = 0; i < slot_amount; i++) {
        sum += slots[i].get_length();
    }
    double mean = sum / slot_amount;

    double sum_squared_error = 0.0;
    for (int i = 0; i < slot_amount; i++) {
        sum_squared_error += std::pow(slots[i].get_length() - mean, 2);
    }

    double std_dev = std::sqrt(sum_squared_error / slot_amount);
    std::cout << std_dev << std::endl;
}
