//
// Created by Leon on 6. 05. 2022.
//

#ifndef NALOGA0802_LINKEDLIST_H
#define NALOGA0802_LINKEDLIST_H

#include <iostream>
#include "Node.h"

template<typename T>
class LinkedList {
private:
    Node<T> *head;
public:
    LinkedList(Node<T> *head = nullptr);

    ~LinkedList();

    bool isEmpty() const;

    unsigned int getSize() const;

    void add(T value);

    T at(unsigned int index) const;

    Node<T> *atPointer(unsigned int index) const;

    void reverse();
};

template<typename T>
LinkedList<T>::LinkedList(Node<T> *head) : head(head) {
}

template<typename T>
LinkedList<T>::~LinkedList() {
    Node<T> *p;
    while (head->getNext() != nullptr) {
        p = head;
        head = head->getNext();
        delete p;
    }
}

template<typename T>
bool LinkedList<T>::isEmpty() const {
    if (head == nullptr) {
        return true;
    } else {
        return false;
    }
}

template<typename T>
unsigned int LinkedList<T>::getSize() const {
    unsigned int counter = 0;
    if (isEmpty()) {
        return counter;
    } else if (head->getNext() == nullptr) {
        return 1;
    } else {
        Node<T> *p;
        p = head;
        while (p->getNext() != nullptr) {
            counter++;
            p = p->getNext();
        }
        return counter + 1;
    }
}

template<typename T>
void LinkedList<T>::add(T value) {
    if (isEmpty()) {
        head = new Node<T>(value);
    } else if (head->getNext() == nullptr) {
        head->setNext(new Node<T>(value));
    } else {
        Node<T> *p;
        p = head;
        while (p->getNext() != nullptr) {
            p = p->getNext();
        }
        p->setNext(new Node<T>(value));
    }
}

template<typename T>
T LinkedList<T>::at(unsigned int index) const {
    if (index == 0) {
        return head->getValue();
    } else {
        unsigned int i = 0;
        Node<T> *p;
        p = head;
        while (p->getNext() != nullptr && i != index - 1) {
            p = p->getNext();
            i++;
        }
        return p->getNext()->getValue();
    }
}

template<typename T>
Node<T> *LinkedList<T>::atPointer(unsigned int index) const {
    if (index == 0) {
        return head;
    } else {
        unsigned int i = 0;
        Node<T> *p;
        p = head;
        while (p->getNext() != nullptr && i != index - 1) {
            p = p->getNext();
            i++;
        }
        return p->getNext();
    }
}

template<typename T>
void LinkedList<T>::reverse() {
    int size = getSize() - 1;
    Node<T> *p;
    p = atPointer(size);
    Node<T> *p2;
    Node<T> *p3;

    for (int i = 0; i < size; ++i) {
        p2 = head;
        while (p2->getNext()->getNext() != nullptr) {
            p2 = p2->getNext();
        }

        p3 = p;
        while (p3->getNext() != nullptr) {
            p3 = p3->getNext();
        }
        p3->setNext(p2);
        p2->setNext(nullptr);
    }

    head = p;
}


#endif //NALOGA0802_LINKEDLIST_H
