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

    cout << head;
    
    cin.get();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
