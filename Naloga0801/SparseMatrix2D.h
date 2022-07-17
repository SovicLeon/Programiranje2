//
// Created by Leon on 5. 05. 2022.
//

#ifndef NALOGA0801_SPARSEMATRIX2D_H
#define NALOGA0801_SPARSEMATRIX2D_H

#include "Element.h"
#include <vector>

template<typename T>
class SparseMatrix2D {
private:
    std::vector<Element<T>> elements;
    unsigned int sizeX, sizeY;
    T defaultElement;
public:
    SparseMatrix2D(unsigned int sizeX, unsigned int sizeY, T defaultElement);

    void set(unsigned int x, unsigned int y, T value);

    T at(unsigned int x, unsigned int y) const;

    unsigned int getSizeX() const;

    unsigned int getSizeY() const;

    void fillRow(unsigned int row, T e);

    void fillColumn(unsigned int col, Element<T> e);
};

template<typename T>
SparseMatrix2D<T>::SparseMatrix2D(unsigned int sizeX, unsigned int sizeY, T defaultElement) : sizeX(sizeX),
                                                                                              sizeY(sizeY),
                                                                                              defaultElement(
                                                                                                      defaultElement) {
}

template<typename T>
void SparseMatrix2D<T>::set(unsigned int x, unsigned int y, T value) {
    for (int i = 0; i < elements.size(); ++i) {
        if (elements[i].getX() == x && elements[i].getY() == y) {
            elements[i].setValue(value);
            return;
        }
    }
    Element<T> e(x, y, value);
    elements.push_back(e);
}

template<typename T>
T SparseMatrix2D<T>::at(unsigned int x, unsigned int y) const {
    for (int i = 0; i < elements.size(); ++i) {
        if (elements[i].getX() == x && elements[i].getY() == y) {
            return elements[i].getValue();
        }
    }
    return defaultElement;
}

template<typename T>
unsigned int SparseMatrix2D<T>::getSizeX() const {
    return sizeX;
}

template<typename T>
unsigned int SparseMatrix2D<T>::getSizeY() const {
    return sizeY;
}

template<typename T>
void SparseMatrix2D<T>::fillRow(unsigned int row, T e) {

    for (int i = 0; i < sizeX; ++i) {

        set(row, i, e);

    }
}

template<typename T>
void SparseMatrix2D<T>::fillColumn(unsigned int col, Element<T> e) {

    for (int i = 0; i < sizeY; ++i) {

        set(i, col, e.getValue());

    }
}


#endif //NALOGA0801_SPARSEMATRIX2D_H
