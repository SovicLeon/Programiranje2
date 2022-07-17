//
// Created by Leon on 5. 05. 2022.
//

#ifndef NALOGA0801_ELEMENT_H
#define NALOGA0801_ELEMENT_H

template <typename T>
class Element {
private:
    unsigned int x, y;
    T value;
public:
    Element(unsigned int x, unsigned int y, T value);
    void setX(unsigned int x);
    void setY(unsigned int y);
    void setValue(T value);
    unsigned int getX() const;
    unsigned int getY() const;
    T getValue() const;
};

template<typename T>
Element<T>::Element(unsigned int x, unsigned int y, T value) : x(x), y(y), value(value) {
}

template<typename T>
void Element<T>::setX(unsigned int x) {
    this->x = x;
}

template<typename T>
void Element<T>::setY(unsigned int y) {
    this->y = y;
}

template<typename T>
void Element<T>::setValue(T value) {
    this->value = value;
}

template<typename T>
unsigned int Element<T>::getX() const {
    return x;
}

template<typename T>
unsigned int Element<T>::getY() const {
    return y;
}

template<typename T>
T Element<T>::getValue() const {
    return value;
}


#endif //NALOGA0801_ELEMENT_H
