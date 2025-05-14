#include "linked-list.h"

int main() {

    LinkedList* myLinkedList = new LinkedList(0);

    myLinkedList->append(1);
    myLinkedList->append(2);
    myLinkedList->append(3);
    
    myLinkedList->printList();

    myLinkedList->set(2, 10);

    myLinkedList->printList();

    myLinkedList->insert(1, 20);
    myLinkedList->printList();

    myLinkedList->deleteNode(1);
    myLinkedList->printList();

    myLinkedList->reverse();
    myLinkedList->printList();

    delete myLinkedList;

    return 0;
}
