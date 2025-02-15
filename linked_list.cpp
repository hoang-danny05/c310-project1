#include <iostream>
#include <string>
#include <cmath>
#include "linked_list.h"




/*
    Meant to serve as a linked list ONLY for chaining hash tables
    :)
 */

LinkedList::LinkedList() {
    head = NULL; // ONLY when list is empty!
    tail = NULL;
    length = 0;
}

void LinkedList::append(std::string str) {
    Node* newnode;
    newnode = (Node*) malloc(sizeof(Node));
    if (head == NULL) {// create new head 
        head = newnode;
    } else {
        tail->next = newnode;
    }
    newnode->key = str;
    newnode->next = NULL;
    tail = newnode;
    length++;
}

void LinkedList::print() {
    if (head == NULL) {
        std::cout << "==NONE==\n";
        return;
    }
    Node* nodeptr = head;
    while(1) {
        std::cout << nodeptr->key;
        if (nodeptr->next == NULL) 
            break;
        std::cout << ", ";
        nodeptr = nodeptr->next;
    }
    std::cout << std::endl;
}

int LinkedList::get_length() {
    return length;
}

