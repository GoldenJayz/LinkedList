// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author Jaden

#include <iostream>
using namespace std;

class LinkedList {
public:
    int value;
    LinkedList* next;

    void printList(LinkedList* head) {
        while (head != NULL) {
            cout << head->value << endl;
            head = head->next;
        }
    }

    LinkedList* searchValue(LinkedList* head, int value) {
        while (true) { 
            if (head == nullptr)
                return nullptr;
            else if (head->value == value) {
                cout << head << endl;
                return head;
            }
            else
                head = head->next;

        }
    }
};

class Queue {
private:
    uint32_t length;
    LinkedList* head;

public: 
    Queue() {
        this->head = new LinkedList;
        this->length = 0;
        this->head->value = 1;
        this->head->next = new LinkedList;
        this->head->next->value = 2;
        this->head->next->next = NULL;
    }

    void getPosition() {

    }

    int getLength() {
        LinkedList* node = new LinkedList; // Store a copy of head so we do not set the actual head to something different
        LinkedList* linkedListNodePtr = node;
        // Idk if that made a copy or stored the address to head
        int len = 0;

        node->next = head->next; // Copying data
        node->value = head->value;

        cout << this->head << endl;
        cout << node << endl;

        while (node != NULL) {
            len += 1;
            node = node->next;
        }

        this->length = len;

        delete linkedListNodePtr; // reclaim memory
        // Not sure if it is actually freeing the memory

        return this->length;
    }

    void appendToQueue() {
        // Find the last element and add a pointer to a new linked list

    }

    void removeSelf() {

    }

    // Recalculate queue length when it is adjusted

    ~Queue() {
        delete head;
    }
};


int main()
{
    /* Linked List Construction */
    LinkedList* head = new LinkedList;
    LinkedList* node = new LinkedList;

    head->value = 1;
    head->next = node;

    node->value = 2;
    node->next = NULL;

    head->printList(head);
    head->searchValue(head, 2);

    cout << head << endl;
    
    delete node;
    delete head;

    Queue* queue = new Queue();

    int len = queue->getLength();

    cout << len << endl;

    int len2 = queue->getLength();
    cout << len2 << endl;

    // Checking if it frees the head's memory

    delete queue;

    cin.get();
    return 0;
}
