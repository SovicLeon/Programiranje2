//
// Created by Leon on 6. 05. 2022.
//

#ifndef NALOGA0802_NODE_H
#define NALOGA0802_NODE_H

template <typename T>
class Node {
private:
    T value;
    Node* next;
public:
    Node(T value, Node* next = nullptr);
    T getValue() const;
    Node* getNext() const;
    void setValue(T value);
    void setNext(Node<T>* newNode);
};

template<typename T>
Node<T>::Node(T value, Node *next) : value(value), next(next) {
}

template<typename T>
T Node<T>::getValue() const {
    return value;
}

template<typename T>
Node<T> *Node<T>::getNext() const {
    return next;
}

template<typename T>
void Node<T>::setValue(T value) {
    this->value = value;
}

template<typename T>
void Node<T>::setNext(Node<T> *newNode) {
    next = newNode;
}


#endif //NALOGA0802_NODE_H
