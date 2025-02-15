#include <iostream>
#include <string>
#include <cmath>
#include "linked_list.h"




/*
    Meant to serve as a linked list ONLY for chaining hash tables
    :)
 */

class LinkedList {
    private:
        Node* head;
        Node* tail;
    public:
        LinkedList() {
            head = NULL; // ONLY when list is empty!
            tail = NULL;
        }

        void append(std::string str) {
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
        }

        void print() {
            std::cout << "Test print\n";
            Node* nodeptr = head;
            while(1) {
                std::cout << nodeptr->key << ",";
                if (nodeptr->next == NULL) 
                    break;
                nodeptr = nodeptr->next;
            }
        }
};

