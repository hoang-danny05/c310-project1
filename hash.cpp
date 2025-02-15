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