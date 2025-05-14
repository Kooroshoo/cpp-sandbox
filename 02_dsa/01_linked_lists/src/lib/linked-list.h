#pragma once

class Node {
public:
    int value;
    Node* next;

    Node(int value); 

};


class LinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:    
    LinkedList(int value);
    ~LinkedList();

    void append(int value);
    void deleteLast();
    void prepend(int value);
    void deleteFirst();
    Node* get(int index);
    bool set(int index, int value);
    bool insert(int index, int value);
    void deleteNode(int index);
    void reverse();
    void getHead();
    void getTail();
    void getLength();
    void printList();

};