#include "linked-list.h"
#include "iostream"

Node::Node(int value) {
    this->value = value;
    this->next = nullptr;
}

LinkedList::LinkedList(int value) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

LinkedList::~LinkedList() {
    Node* temp = head;
    while (head) {
        head = head->next;
        delete temp;
        temp = head;
    }
}

void LinkedList::append(int value) {
    Node* newNode = new Node(value);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    length++;

}


void LinkedList::deleteLast() {
    if (length == 0) return;
    Node* pre = head;
    Node* temp = head;
    while(temp->next) {
        pre = temp;
        temp = temp->next;
    }
    tail = pre;
    tail->next = nullptr;
    length--;
    if (length == 0) {
        head = nullptr;
        tail = nullptr;
    }
    
    delete temp;
    

}

void LinkedList::prepend(int value) {
    Node* newNode = new Node(value);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    length++;
}

void LinkedList::deleteFirst() {
    if (length == 0) return;
    Node* temp = head;
    if (length == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        head = temp->next;
    }

    delete temp;
    length--;
    
    
}

Node* LinkedList::get(int index) { 
    if (index < 0 || index >= length) {
        return nullptr;
    }
    Node* temp = head;
    for (int i = 0; i < index; i++) {
        temp = temp->next;
    }
    return temp;
    
}

bool LinkedList::set(int index, int value) {
    Node* temp = get(index);
    if (temp) {
        temp->value = value;
        return true;
    }
    return false;
}

bool LinkedList::insert(int index, int value) {
    if (index < 0 || index > length) return false;

    if (index == 0) {
        prepend(value);
        return true;
    }

    if (index == length) {
        append(value);
        return true;
    }

    Node* newNode = new Node(value);
    Node* temp = get(index - 1);

    newNode->next = temp->next;
    temp->next = newNode;

    length++;
    return true;
}

void LinkedList::deleteNode(int index) {
    if (index < 0 || index > length) return;
    if (index == 0) deleteFirst();
    if (index == length - 1) deleteLast();
    
    Node* pre = get(index - 1);
    Node* temp = pre->next;
    pre->next = temp->next;
    delete temp;
    length --;
    
}

void LinkedList::reverse() {
    Node* before = nullptr;
    Node* temp = head;
    Node* after = temp->next;
    head = tail;
    tail = temp;

    for (int i = 0; i < length; i++) {
        after = temp->next;
        temp->next = before;
        before = temp;
        temp = after;
    }
}

void LinkedList::getHead() {
    std::cout << "Head: " << head->value << std::endl;
}

void LinkedList::getTail() {
    std::cout << "Tail: " << tail->value << std::endl;
}

void LinkedList::getLength() {
    std::cout << "Length: " << length << std::endl;
}

void LinkedList::printList() {
    Node* temp = head;
    std::cout << "Complete list: " << std::endl;
    while (temp) {
        std::cout << temp->value << std::endl;
        temp = temp->next;
    }

}